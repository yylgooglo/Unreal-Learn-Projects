// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	float Myfloat = 3.14f;
	float ShenGao = 175.995f;

	int	TiZhong = 70;

	FString JieShao = TEXT("wo shi wanjia juese.");

	FName MyName = FName(TEXT("Star"));

	double JinQian = 1234567890.123456;

	UE_LOG(LogTemp, Warning, TEXT("Hello Unreal! My height is %.2f cm and my weight is %d kg."), ShenGao, TiZhong);

	UE_LOG(LogTemp, Display, TEXT("Hello Unreal! My height is %f cm and my weight is %d kg."), Myfloat, TiZhong);

	//UE_LOG(LogTemp, Error, TEXT("Hello Unreal! My name is %s,Jian dan jie shao :%s and I have %f de qian"), *MyName, *JieShao, JinQian);

	//UE_LOG(LogTemp, Warning, TEXT("我叫 %s，%s，我有 %.2f 块钱！"), *MyName, *JieShao, JinQian);

	//UE_LOG(LogTemp, Log, TEXT("我叫 %s，%s，我有 %.2f 块钱！"), *MyName, *JieShao, (double)JinQian);

	UE_LOG(LogTemp, Warning, TEXT("My name is %s，zi wo jie shao:%s，I have  %.2f kuai qian！"),
		*MyName.ToString(),     // ← FName 必须先 ToString()
		*JieShao,
		JinQian);

	/*UE_LOG(LogTemp, Log, TEXT("我叫 %s，%s，我有 %.2f 块钱！"),
		*MyName.GetDisplayNameEntry()->DisplayNameText.ToString(),
		*JieShao,
		(double)JinQian);**/

	bool ZRJiance = true;
	UE_LOG(LogTemp, Warning, TEXT("ZhengRangJiance de jia zhi shi：%s"), ZRJiance ? TEXT("true") : TEXT("false"));	

	UObject* MyObject = this;
	UE_LOG(LogTemp, Warning, TEXT("This actor's name is: %s"), *MyObject->GetName());	
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

