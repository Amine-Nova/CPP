/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:02:08 by abenmous          #+#    #+#             */
/*   Updated: 2023/12/23 19:25:37 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{
    target = "ShrubberyCreation";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string spot) : AForm("ShrubberyCreation", 145, 137)
{
    target = spot;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
    *this = obj;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a)
{
    if (this != &a)
    {
        this->target = a.target;
        this->indication = a.indication;
    }
    return (*this);
}

std::string ShrubberyCreationForm::set_tree() const
{
    std::string tree;

    tree ="            *            ,\n";
    tree.append("                       _/^\\_\n");
    tree.append("     *                 /.-.\\         *\n");
    tree.append("              *        `/&\\`                   *\n");
    tree.append("                      ,@.*;@,\n");
    tree.append("                     /_o.I %_\\    *\n");
    tree.append("        *           (`'--:o(_@;\n");
    tree.append("                   /`;--.,__ `')             *\n");
    tree.append("                  ;@`o % O,*`'`&\\\n");
    tree.append("            *    (`'--)_@ ;o %'()\\      *\n");
    tree.append("                 /`;--._`''--._O'@;\n");
    tree.append("                /&*,()~o`;-.,_ `\"\"`)\n");
    tree.append("     *          /`,@ ;+& () o*`;-';\\\n");
    tree.append("               (`\"\"--.,_0 +% @' &()\\\n");
    tree.append("               /-.,_    ``''--....-'`)  *\n");
    tree.append("          *    /@%;o`:;'--,.__   __.'\\\n");
    tree.append("              ;*,&(); @ % &^;~`\"`o;@();         *\n");
    tree.append("              /(); o^~; & ().o@*&`;&%O\\\n");
    tree.append("              `\"=\"==\"\"==,,,.,=\"==\"===\"`\n");
    tree.append("           __.----.(\\-''#####---...___...-----._\n");
    tree.append("         '`         \\)_`\"\"\"\"\"`\n");
    tree.append("(                .--' ')\n");
    tree.append("               o(  )_-\\\n");
    tree.append("                 `\"\"\"` `\n");
    return(tree);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::fstream File;
    std::string tree;

    if (executor.getGrade() > this->gete_grade())
        throw GradeTooLowException();
    tree = set_tree();
    File.open(target + "_shrubbery", std::ios::out);
    if (File.is_open())
    {
        File << tree;
        File.close();
    }
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}