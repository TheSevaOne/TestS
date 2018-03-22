/**
 * tracer.c -- возвращает ссылку на строку по индексу
 *
 * Copyright (c) 2017, Vladislav Klimenko <klimenko@petrsu.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include "_text.h"

/**
 * Возвращает ссылку на строку
 *
 * @param txt текст
 * @param index индекс строки
 * @returns ref ссылка на строку
 */

node *tracer(text txt, int index){
    /* Обращение к отрицательной строке */
    if(index < 0) return NULL;
    int i;
    /* Выход за пределы строк */
    if((int)txt -> length <= index) return NULL;
    struct _node *ref = txt -> begin;
    for(i = 0; i < index; i++)
       ref = ref -> next;
    return ref;
}
/**
 * Возвращает индекс строки курсора
 * @param txt
 * @return index
 *
 */
int currentline(text txt)
{
    int i = 0;
    node *line = txt -> begin;
    while(line != NULL)
	if(txt -> cursor -> line == line)
	    return i;
	else {
	    line = line -> next;
	    i++;
	}
    return 1;
}
void  rh(text txt)
{
    node *i;
    if (txt->begin->next == NULL)
    {
	remove_all(txt);
	return;
    }

if(txt->cursor->line == txt->begin)
	{
txt->cursor->line = txt->begin->next;
txt->cursor->position = 0;
	}

    i = txt->begin->next;
    
    free(txt->begin);
    txt->begin = i;
    txt->begin->previous = NULL;
    txt->length--;

}

	
    


 
