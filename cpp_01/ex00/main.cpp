/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 09:22:27 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 09:27:03 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void PonyStack() // 지역변수
{
	Pony pony("bkwag");
	pony.SaySomething();
}

void PonyHeap() // 동적할당
{
	Pony *pony = new Pony("hyunyoo");

	pony->SaySomething();
	delete pony; // new로 생성했기 때문에 delete를 안하면 죽지않음
}

int main()
{
	PonyStack();
	PonyHeap();
}
