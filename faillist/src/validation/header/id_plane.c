#include <stddef.h>
#include <printf.h>
#include <memory.h>
#include <stdlib.h>
#include "external/slre.h"
#include "id_plane.h"

#ifdef VALID_ID_PLANE_DEBUG
#define DBG(x) printf x
#else
#define DBG(x)
#endif

struct id_plane {
    const char country[50];
    const char registration_prefix[10];
    const char regex[150];
};

static const struct id_plane id_planes[] = {
        {"Afghanistan",                   "YA",   "^YA-[A-Z][A-Z][A-Z]$"},
        {"Albania",                       "ZA",   "^ZA-[A-Z][A-Z][A-Z]$"},
        {"Algeria",                       "7T",   "^7T-[A-Z][A-Z][A-Z]$"},
        {"Andorra",                       "C3",   "^C3-[A-Z][A-Z][A-Z]$"},
        {"Angola",                        "D2",   "^D2-[A-Z][A-Z][A-Z]$"},
        {"Anguilla",                      "VP-A", "^VP-A[A-Z][A-Z]$"},
        {"Antigua and Barbuda",           "V2",   "^V2-[A-Z][A-Z][A-Z]$"},
        {"Argentina",                     "LV",   "^LV-[A-Z][A-Z][A-Z]$"},
        {"Argentina",                     "LQ",   "^LQ-[A-Z][A-Z][A-Z]$"},
        {"Armenia",                       "EK",   "^EK-[0-9][0-9][0-9][0-9]$"},
        {"Australia",                     "VH",   "^VH-[A-Z][A-Z][A-Z]$"},
        {"Austria",                       "OE",   "^OE-([A-KBLVWX][A-Z][A-Z])|([0-59][0-9][0-9][0-9])$"},
        {"Azerbaijan",                    "4K",   "^4K-(AZ[1-9][A-Z][0-9])|[0-9][0-9][0-9][0-9])$"},
        {"Bahamas",                       "C6",   "^C6-[A-Z][A-Z][A-Z]$"},
        {"Bahrain",                       "A9C",  "^A9C-[A-Z][A-Z]$"},
        {"Bangladesh",                    "S2",   "^S2-[A-Z][A-Z][A-Z]$"},
        {"Barbados",                      "8P",   "^8P-[A-Z][A-Z][A-Z]$"},
        {"Belarus",                       "EW",   "^EW-([0-9][0-9][0-9][0-9][0-9])|(2[0-9]{2}PA)|(1[0-9]{2}PJ)|([0-9]{4}L)|(001DA)|(001PA)|(001PB)|(85815)$"},
        {"Belgium",                       "OO",   "^OO-([A-PR-ZBY-Z][A-Z][A-Z])$"},
        {"Belgium",                       "OO",   "^OO-([0-9][1-9])|([1-9][0-9])|([1-4][0-9][0-9])$"},
        {"Belize",                        "V3",   "^V3-[A-Z][A-Z][A-Z]$"},
        {"Benin",                         "TY",   "^TY-[A-Z][A-Z]$"},
        {"Bermuda",                       "VP-B", "^VP-B[A-Z][A-Z]$"},
        {"Bermuda",                       "VQ-B", "^VQ-B[A-Z][A-Z]$"},
        {"Bhutan",                        "AS",   "^AS-[A-Z][A-Z][A-Z]$"},
        {"Bolivia",                       "AS",   "^AS-[A-Z][A-Z][A-Z]$"},
        {"Bosnia and Herzegovina",        "T9",   "^T9-[A-Z][A-Z][A-Z]$"},
        {"Bosnia and Herzegovina",        "E7",   "^E7-[A-Z][A-Z][A-Z]$"},
        {"Botswana",                      "A2",   "^A2-[A-Z][A-Z][A-Z]$"},
        {"Brazil",                        "PP",   "^PP-[A-Z][A-Z][A-Z]$"},
        {"Brazil",                        "PR",   "^PR-[A-Z][A-Z][A-Z]$"},
        {"Brazil",                        "PS",   "^PS-[A-Z][A-Z][A-Z]$"},
        {"Brazil",                        "PT",   "^PT-[A-Z][A-Z][A-Z]$"},
        {"Brazil",                        "PU",   "^PU-[A-Z][A-Z][A-Z]$"},
        {"British Virgin Islands",        "VP-L", "^VP-L[A-Z][A-Z]$"},
        {"Brunei",                        "V8",   "^V8-[A-Z][A-Z][A-Z]$"},
        {"Brunei",                        "V8",   "^V8-[A-Z][A-Z][0-9]$"},
        {"Brunei",                        "V8",   "^V8-([0-9]{2}1|[0-9][1-9][0-9]|[1-9][0-9]{2})$"},
        {"Bulgaria",                      "LZ",   "^LZ-[A-Z]{3}$"},
        {"Burkina Faso",                  "XT",   "^XT-[A-Z]{3}$"},
        {"Burundi",                       "9U",   "^9U-[A-Z]{3}$"},
        {"Cambodia",                      "XU",   "^XU-[A-Z]{3}$"},
        {"Cameroon",                      "TJ",   "^TJ-[A-Z]{3}$"},
        {"Canada",                        "C",    "^C-[FGI][A-Z]{3}$"},
        {"Canada",                        "CF",   "^CF-[A-Z]{3}$"},
        {"Canada",                        "VO",   "^VO-[A-Z]{3}$"},
        {"Cape Verde",                    "D4",   "^D4-[A-Z]{3}$"},
        {"Cayman Islands",                "VP-C", "^VP-C[A-Z]{2}$"},
        {"Central African Republic",      "TL",   "^TL-[A-Z]{3}$"},
        {"Chad",                          "TT",   "^TT-[A-Z]{3}$"},
        {"Chile",                         "CC",   "^CC-[A-Z]{3}$"},
        {"Republic of China (Taiwan)",    "B",    "^B-[0-9]{5}$"},
        {"People's Republic of China",    "B",    "^B-(1[5-9][0-9]{2}|[2-9][0-9]{3})$"},
        {"People's Republic of China",    "B",    "^B-[0-9]{2}[A-Z]{2}$"},
        {"Hong Kong",                     "B-H",  "^B-H[A-Z]{2}$"},
        {"Hong Kong",                     "B-K",  "^B-K[A-Z]{2}$"},
        {"Hong Kong",                     "B-L",  "^B-L[A-Z]{2}$"},
        {"Macau",                         "B-M",  "^B-M[A-Z]{2}$"},
        {"Colombia",                      "HJ",   "^HJ-(1[0-9]{3}|[0-9]{4})[A-Z]$"},
        {"Colombia",                      "HK",   "^HK-(1[0-9]{3}|[0-9]{4})[A-Z]$"},
        {"Comoros",                       "D6",   "^D6-[A-Z]{3}$"},
        {"Congo, Republic of",            "TN",   "^TN-[A-Z]{3}$"},
        {"Cook Islands",                  "E5",   "^E5-[A-Z]{3}$"},
        {"Congo, Democratic Republic of", "9Q",   "^9Q-[A-Z]{3}$"},
        {"Costa Rica",                    "TI",   "^TI-[A-Z]{3}$"},
        {"Costa Rica",                    "TI",   "^TI-[0-9]{3}$"},
        {"Côte d'Ivoire",                 "TU",   "^TU-[A-Z]{3}$"},
        {"Croatia",                       "CU",   "^CU-[ACHNTU](1[0-9]{3})$"},
        {"Cyprus, Republic of",           "5B",   "^5B-[A-Z]{3}$"},
        {"Czech Republic",                "OK",   "^OK-[A-Z]{3}$"},
        {"Czech Republic",                "OK",   "^OK-[A-Z]{3} [0-9]{2}$"},
        {"Czech Republic",                "OK",   "^OK-[0-9]{4}$"},
        {"Czech Republic",                "OK",   "^OK-A[0-9]{3}$"},
        {"Denmark",                       "OY",   "^OY-[0-9]{3}$"},
        {"Denmark",                       "OY",   "^OY-(8[1-9][0-9]{0,2})$"},
        {"Denmark",                       "OY",   "^OY-(9[1-9][0-9]{0,2})$"},
        {"Denmark",                       "OY",   "^OY-1([0-9]{2}[1-9][0-9][1-9][0-9]|[1-9][0-9]{2})$"},
        {"Djibouti",                      "J2",   "^J2-[A-Z]{3}$"},
        {"Dominica",                      "J7",   "^J7-[A-Z]{3}$"},
        {"Dominican Republic",            "HI",   "^HI-([0-9]{2}[1-9][0-9][1-9][0-9]|[1-9][0-9]{2})[A-Z]{2}$"},
        {"East Timor",                    "4W",   "^4W-[A-Z]{3}$"},
        {"Ecuador",                       "4W",   "^4W-[A-Z]{3}$"},
        {"Egypt",                         "SU",   "^SU-([A-Y][A-Z]{2}|X[A-X][A-Z])$"},
        {"Egypt",                         "SU",   "^SU-Z[A-Z]{2}$"},
        {"Egypt",                         "SU",   "^SU-([0-9]{2}[1-9]|[0-9][1-9][0-9]|[1-9]{2}[0-9])$"},
        {"El Savador",                    "YS",   "^YS-[A-Z]{3}$"},
        {"Equatorial Guinea",             "3C",   "^3C-[A-Z]{3}$"},
        {"Equatorial Guinea",             "E3",   "^3C-[A-Z]{4}$"},
        {"Estonia",                       "ES",   "^ES-[A-Z]{4}$"},
        {"Ethiopia",                      "ET",   "^ET-[A-Z]{3}$"},
        {"Falkland Islands",              "VP-F", "^VP-F[A-Z]{2}$"},
        //{"Faroe Islands", "VP-F", "^VP-F[A-Z]{2}$"},
        {"Fiji Islands",                  "DQ",   "^DQ[A-Z]{3}$"},
        {"Finland",                       "OH",   "^OH-[A-Z]{3}$"},
        {"Finland",                       "OH",   "^OH-[GU]?([0-9]{2}[1-9]|[0-9][1-9][0-9]|[1-9]{2}[0-9])$"},
        {"Finland",                       "OH",   "^OH-[GU]?([0-9]{2}[1-9]|[0-9][1-9][0-9]|[1-9]{2}[0-9])$"},
        {"France",                        "F",    "^F-[A-Z]{4}$"},
        {"France",                        "F",    "^F-([0-8][0-9]|[9][0-9])-[A-Z]{2,3}$"},
        {"French West Indies",            "F-OG", "^F-OG[A-Z]{2}$"},
        {"French Guyana",                 "F-O",  "^F-O[A-Z]{3}$"},
        {"Gabon",                         "TR",   "^TR-[A-Z]{3}$"},
        {"Gambia",                        "C5",   "^C5-[A-Z]{3}$"},
        {"Georgia",                       "4L",   "^4L-[A-Z]{3}$"},
        {"Georgia",                       "4L",   "^4L-[0-9]{5}$"},
        {"Germany",                       "D",    "^D-A[U-Z][A-Z]{2}$"},
        {"Germany",                       "D",    "^D-[BCEFGIHKLMNO][A-Z]{3}$"},
        {"Germany",                       "D",    "^D-[0-9]{4}$"},
};

int faillist_valid_header_id_plane(faillist_validated_data_header_t *header, unsigned char id_plane[]) {
    size_t l = strlen((const char *) id_plane);

    for (unsigned int i = 0; i < 106; i++) {
        char buf[10];

        buf[0] = '^';
        buf[1] = '\0';
        strcat(buf, id_planes[i].registration_prefix);

        DBG(id_planes[i].country);
        DBG(":\n");

        if (slre_match(buf, (const char *) id_plane, (int) l, NULL, 0, 0) > 0) {
            DBG("\tCountry code : OK\n");
            if (slre_match(id_planes[i].regex, (const char *) id_plane, (int) l, NULL, 0, 0) > 0) {
                DBG("\tPlane ID : OK");

                strcpy(header->id_plane, (const char *) id_plane);
                strcpy(header->nationality, id_planes[i].country);

                return EXIT_SUCCESS;
            } else {
                DBG("\tPlane ID : KO");
            }
        } else {
            DBG("\tCountry code : KO\n");
        }
        DBG("\n");
    }
    return EXIT_FAILURE;
}
