        list_t *new_node;
        int c;

        for (c = 0; dup_str[c] != '\0'; c++)
                ;
        new_node = malloc(sizeof(list_t));
        if (new_node == NULL)
        {
                free(new_node);
                return (NULL);
        }
        new_node->str = strdup(str);
        if (new_node->str == NULL)
        {
                free(new_node);
                return (NULL);
        }
        new_node->len = c;
        new_node->next = *head;

        *head = new_node;
        return (*head);
}

