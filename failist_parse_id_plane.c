int failist_parse_id_plane(struct failist_data_header*, char **failist_ptr) {
    int i = 0;
    
    while (**failist_ptr != '\0') {
        if (i == 11) {
            return 0;
        }
        failist_data_header.id_plane[i] = **failist_ptr;
        (*failist_ptr)++;
        i++;
    }
    (*failist_ptr)++;
    return 1;
}
