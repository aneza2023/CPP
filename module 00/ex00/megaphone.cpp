/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 10:55:53 by anezkahavra       #+#    #+#             */
/*   Updated: 2025/09/29 17:09:31 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc == 1)
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    }
    while (i < argc)
    {
        cout << argv[i];
        ++i;
    }
    return 0;
}