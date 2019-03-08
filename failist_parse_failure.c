int failist_parse_failure(struct failist_data_header*, char **failist_ptr) {
    int i = 0;
    
    while (**failist_ptr != '\0') {
        failist_data_header.id_failure[i] = **failist_ptr;
        (*failist_ptr)++;
        i++;
    }
    (*failist_ptr)++;
    return 1;
}

