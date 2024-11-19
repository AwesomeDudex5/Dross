#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Exception System.Linq.Error::NotSupported()
extern void Error_NotSupported_m51A0560ABF374B66CF6D1208DAF27C4CBAD9AABA (void);
// 0x00000006 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000008 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000009 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000A System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<TKey,TSource>> System.Linq.Enumerable::GroupBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000E TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x00000012 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000014 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000016 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000018 System.Double System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Double>)
extern void Enumerable_Sum_m279F93FEBF5A84DAD2DF71CF624D249B5F2AC90F (void);
// 0x00000019 System.Double System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Double>)
// 0x0000001A System.Double System.Linq.Enumerable::Average(System.Collections.Generic.IEnumerable`1<System.Double>)
extern void Enumerable_Average_m4DD4CE70F9D7E88E9198877289E353F60EF2D7F7 (void);
// 0x0000001B System.Double System.Linq.Enumerable::Average(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Double>)
// 0x0000001C System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001D TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001F System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000020 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000021 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000025 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000026 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000027 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000029 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002A System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000048 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000049 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004A TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004B System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x0000004C System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x0000004D System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x0000004E System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x0000004F TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000050 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x00000051 System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x00000052 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000053 System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000054 System.Func`2<TElement,TElement> System.Linq.IdentityFunction`1::get_Instance()
// 0x00000055 System.Void System.Linq.IdentityFunction`1/<>c::.cctor()
// 0x00000056 System.Void System.Linq.IdentityFunction`1/<>c::.ctor()
// 0x00000057 TElement System.Linq.IdentityFunction`1/<>c::<get_Instance>b__1_0(TElement)
// 0x00000058 TKey System.Linq.IGrouping`2::get_Key()
// 0x00000059 System.Linq.Lookup`2<TKey,TElement> System.Linq.Lookup`2::Create(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000005A System.Void System.Linq.Lookup`2::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000005B System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.Lookup`2::GetEnumerator()
// 0x0000005C System.Collections.IEnumerator System.Linq.Lookup`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005D System.Int32 System.Linq.Lookup`2::InternalGetHashCode(TKey)
// 0x0000005E System.Linq.Lookup`2/Grouping<TKey,TElement> System.Linq.Lookup`2::GetGrouping(TKey,System.Boolean)
// 0x0000005F System.Void System.Linq.Lookup`2::Resize()
// 0x00000060 System.Void System.Linq.Lookup`2/Grouping::Add(TElement)
// 0x00000061 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.Lookup`2/Grouping::GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Linq.Lookup`2/Grouping::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 TKey System.Linq.Lookup`2/Grouping::get_Key()
// 0x00000064 System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_Count()
// 0x00000065 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_IsReadOnly()
// 0x00000066 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Add(TElement)
// 0x00000067 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Clear()
// 0x00000068 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Contains(TElement)
// 0x00000069 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.CopyTo(TElement[],System.Int32)
// 0x0000006A System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Remove(TElement)
// 0x0000006B System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.IndexOf(TElement)
// 0x0000006C System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.Insert(System.Int32,TElement)
// 0x0000006D System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.RemoveAt(System.Int32)
// 0x0000006E TElement System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.get_Item(System.Int32)
// 0x0000006F System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.set_Item(System.Int32,TElement)
// 0x00000070 System.Void System.Linq.Lookup`2/Grouping::.ctor()
// 0x00000071 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::.ctor(System.Int32)
// 0x00000072 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.IDisposable.Dispose()
// 0x00000073 System.Boolean System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::MoveNext()
// 0x00000074 TElement System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000075 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.Reset()
// 0x00000076 System.Object System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.get_Current()
// 0x00000077 System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::.ctor(System.Int32)
// 0x00000078 System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.IDisposable.Dispose()
// 0x00000079 System.Boolean System.Linq.Lookup`2/<GetEnumerator>d__12::MoveNext()
// 0x0000007A System.Linq.IGrouping`2<TKey,TElement> System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current()
// 0x0000007B System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.Reset()
// 0x0000007C System.Object System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.get_Current()
// 0x0000007D System.Void System.Linq.GroupedEnumerable`3::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000007E System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.GroupedEnumerable`3::GetEnumerator()
// 0x0000007F System.Collections.IEnumerator System.Linq.GroupedEnumerable`3::System.Collections.IEnumerable.GetEnumerator()
// 0x00000080 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000081 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000082 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000083 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000084 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000085 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000086 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000087 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000088 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000089 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000008A System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000008B System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000008C System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000008D System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000008E System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000008F System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000090 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000091 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000092 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000093 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000094 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000095 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000096 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000097 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000098 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000099 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000009A System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000009B System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x0000009C System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000009D System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000009E System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000009F System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000A0 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000A1 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000A2 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000A3 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000A4 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000A5 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000A7 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000A8 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000AA System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000AB System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000AC System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000AD System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000AE System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000AF System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000B0 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000B1 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000B3 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000B4 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000B5 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000B6 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000B7 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000B8 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000B9 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000BA System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[186] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	Error_NotSupported_m51A0560ABF374B66CF6D1208DAF27C4CBAD9AABA,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m279F93FEBF5A84DAD2DF71CF624D249B5F2AC90F,
	NULL,
	Enumerable_Average_m4DD4CE70F9D7E88E9198877289E353F60EF2D7F7,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[186] = 
{
	2024,
	2024,
	2107,
	2107,
	2107,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	1967,
	-1,
	1967,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[51] = 
{
	{ 0x02000004, { 69, 4 } },
	{ 0x02000005, { 73, 9 } },
	{ 0x02000006, { 84, 7 } },
	{ 0x02000007, { 93, 10 } },
	{ 0x02000008, { 105, 11 } },
	{ 0x02000009, { 119, 9 } },
	{ 0x0200000A, { 131, 12 } },
	{ 0x0200000B, { 146, 1 } },
	{ 0x0200000C, { 147, 2 } },
	{ 0x0200000D, { 149, 6 } },
	{ 0x0200000E, { 155, 4 } },
	{ 0x0200000F, { 159, 3 } },
	{ 0x02000012, { 162, 17 } },
	{ 0x02000013, { 183, 5 } },
	{ 0x02000014, { 188, 1 } },
	{ 0x02000016, { 189, 4 } },
	{ 0x02000017, { 193, 3 } },
	{ 0x02000018, { 196, 5 } },
	{ 0x02000019, { 201, 7 } },
	{ 0x0200001A, { 208, 3 } },
	{ 0x0200001B, { 211, 7 } },
	{ 0x0200001C, { 218, 4 } },
	{ 0x0200001D, { 222, 34 } },
	{ 0x0200001F, { 256, 2 } },
	{ 0x06000006, { 0, 10 } },
	{ 0x06000007, { 10, 10 } },
	{ 0x06000008, { 20, 5 } },
	{ 0x06000009, { 25, 5 } },
	{ 0x0600000A, { 30, 2 } },
	{ 0x0600000B, { 32, 4 } },
	{ 0x0600000C, { 36, 1 } },
	{ 0x0600000D, { 37, 5 } },
	{ 0x0600000E, { 42, 3 } },
	{ 0x0600000F, { 45, 2 } },
	{ 0x06000010, { 47, 2 } },
	{ 0x06000011, { 49, 2 } },
	{ 0x06000012, { 51, 4 } },
	{ 0x06000013, { 55, 3 } },
	{ 0x06000014, { 58, 1 } },
	{ 0x06000015, { 59, 3 } },
	{ 0x06000016, { 62, 2 } },
	{ 0x06000017, { 64, 3 } },
	{ 0x06000019, { 67, 1 } },
	{ 0x0600001B, { 68, 1 } },
	{ 0x0600002B, { 82, 2 } },
	{ 0x06000030, { 91, 2 } },
	{ 0x06000035, { 103, 2 } },
	{ 0x0600003B, { 116, 3 } },
	{ 0x06000040, { 128, 3 } },
	{ 0x06000045, { 143, 3 } },
	{ 0x06000059, { 179, 4 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[258] = 
{
	{ (Il2CppRGCTXDataType)2, 1369 },
	{ (Il2CppRGCTXDataType)3, 3943 },
	{ (Il2CppRGCTXDataType)2, 2157 },
	{ (Il2CppRGCTXDataType)2, 1859 },
	{ (Il2CppRGCTXDataType)3, 6900 },
	{ (Il2CppRGCTXDataType)2, 1425 },
	{ (Il2CppRGCTXDataType)2, 1866 },
	{ (Il2CppRGCTXDataType)3, 6933 },
	{ (Il2CppRGCTXDataType)2, 1861 },
	{ (Il2CppRGCTXDataType)3, 6909 },
	{ (Il2CppRGCTXDataType)2, 1370 },
	{ (Il2CppRGCTXDataType)3, 3944 },
	{ (Il2CppRGCTXDataType)2, 2168 },
	{ (Il2CppRGCTXDataType)2, 1868 },
	{ (Il2CppRGCTXDataType)3, 6942 },
	{ (Il2CppRGCTXDataType)2, 1448 },
	{ (Il2CppRGCTXDataType)2, 1876 },
	{ (Il2CppRGCTXDataType)3, 7027 },
	{ (Il2CppRGCTXDataType)2, 1872 },
	{ (Il2CppRGCTXDataType)3, 6981 },
	{ (Il2CppRGCTXDataType)2, 498 },
	{ (Il2CppRGCTXDataType)3, 54 },
	{ (Il2CppRGCTXDataType)3, 55 },
	{ (Il2CppRGCTXDataType)2, 870 },
	{ (Il2CppRGCTXDataType)3, 2942 },
	{ (Il2CppRGCTXDataType)2, 499 },
	{ (Il2CppRGCTXDataType)3, 62 },
	{ (Il2CppRGCTXDataType)3, 63 },
	{ (Il2CppRGCTXDataType)2, 879 },
	{ (Il2CppRGCTXDataType)3, 2946 },
	{ (Il2CppRGCTXDataType)2, 1686 },
	{ (Il2CppRGCTXDataType)3, 6156 },
	{ (Il2CppRGCTXDataType)3, 3357 },
	{ (Il2CppRGCTXDataType)2, 1357 },
	{ (Il2CppRGCTXDataType)2, 974 },
	{ (Il2CppRGCTXDataType)3, 3180 },
	{ (Il2CppRGCTXDataType)3, 8219 },
	{ (Il2CppRGCTXDataType)3, 2599 },
	{ (Il2CppRGCTXDataType)2, 781 },
	{ (Il2CppRGCTXDataType)2, 1070 },
	{ (Il2CppRGCTXDataType)2, 1155 },
	{ (Il2CppRGCTXDataType)2, 1216 },
	{ (Il2CppRGCTXDataType)2, 577 },
	{ (Il2CppRGCTXDataType)3, 584 },
	{ (Il2CppRGCTXDataType)3, 585 },
	{ (Il2CppRGCTXDataType)2, 1426 },
	{ (Il2CppRGCTXDataType)3, 4292 },
	{ (Il2CppRGCTXDataType)2, 1071 },
	{ (Il2CppRGCTXDataType)3, 8169 },
	{ (Il2CppRGCTXDataType)2, 500 },
	{ (Il2CppRGCTXDataType)3, 82 },
	{ (Il2CppRGCTXDataType)2, 1310 },
	{ (Il2CppRGCTXDataType)2, 994 },
	{ (Il2CppRGCTXDataType)2, 1078 },
	{ (Il2CppRGCTXDataType)2, 1156 },
	{ (Il2CppRGCTXDataType)2, 1079 },
	{ (Il2CppRGCTXDataType)2, 1157 },
	{ (Il2CppRGCTXDataType)3, 2943 },
	{ (Il2CppRGCTXDataType)2, 1067 },
	{ (Il2CppRGCTXDataType)2, 1068 },
	{ (Il2CppRGCTXDataType)2, 1154 },
	{ (Il2CppRGCTXDataType)3, 2941 },
	{ (Il2CppRGCTXDataType)2, 993 },
	{ (Il2CppRGCTXDataType)2, 1077 },
	{ (Il2CppRGCTXDataType)2, 1093 },
	{ (Il2CppRGCTXDataType)2, 1160 },
	{ (Il2CppRGCTXDataType)3, 3056 },
	{ (Il2CppRGCTXDataType)3, 8207 },
	{ (Il2CppRGCTXDataType)3, 8206 },
	{ (Il2CppRGCTXDataType)3, 3945 },
	{ (Il2CppRGCTXDataType)3, 3947 },
	{ (Il2CppRGCTXDataType)2, 312 },
	{ (Il2CppRGCTXDataType)3, 3946 },
	{ (Il2CppRGCTXDataType)3, 3955 },
	{ (Il2CppRGCTXDataType)2, 1373 },
	{ (Il2CppRGCTXDataType)2, 1862 },
	{ (Il2CppRGCTXDataType)3, 6910 },
	{ (Il2CppRGCTXDataType)3, 3956 },
	{ (Il2CppRGCTXDataType)2, 1117 },
	{ (Il2CppRGCTXDataType)2, 1178 },
	{ (Il2CppRGCTXDataType)3, 2953 },
	{ (Il2CppRGCTXDataType)3, 8173 },
	{ (Il2CppRGCTXDataType)2, 1873 },
	{ (Il2CppRGCTXDataType)3, 6982 },
	{ (Il2CppRGCTXDataType)3, 3948 },
	{ (Il2CppRGCTXDataType)2, 1372 },
	{ (Il2CppRGCTXDataType)2, 1860 },
	{ (Il2CppRGCTXDataType)3, 6901 },
	{ (Il2CppRGCTXDataType)3, 2952 },
	{ (Il2CppRGCTXDataType)3, 3949 },
	{ (Il2CppRGCTXDataType)3, 8172 },
	{ (Il2CppRGCTXDataType)2, 1869 },
	{ (Il2CppRGCTXDataType)3, 6943 },
	{ (Il2CppRGCTXDataType)3, 3962 },
	{ (Il2CppRGCTXDataType)2, 1374 },
	{ (Il2CppRGCTXDataType)2, 1867 },
	{ (Il2CppRGCTXDataType)3, 6934 },
	{ (Il2CppRGCTXDataType)3, 4342 },
	{ (Il2CppRGCTXDataType)3, 2057 },
	{ (Il2CppRGCTXDataType)3, 2954 },
	{ (Il2CppRGCTXDataType)3, 2056 },
	{ (Il2CppRGCTXDataType)3, 3963 },
	{ (Il2CppRGCTXDataType)3, 8174 },
	{ (Il2CppRGCTXDataType)2, 1877 },
	{ (Il2CppRGCTXDataType)3, 7028 },
	{ (Il2CppRGCTXDataType)3, 3976 },
	{ (Il2CppRGCTXDataType)2, 1376 },
	{ (Il2CppRGCTXDataType)2, 1875 },
	{ (Il2CppRGCTXDataType)3, 6984 },
	{ (Il2CppRGCTXDataType)3, 3977 },
	{ (Il2CppRGCTXDataType)2, 1120 },
	{ (Il2CppRGCTXDataType)2, 1181 },
	{ (Il2CppRGCTXDataType)3, 2958 },
	{ (Il2CppRGCTXDataType)3, 2957 },
	{ (Il2CppRGCTXDataType)2, 1864 },
	{ (Il2CppRGCTXDataType)3, 6912 },
	{ (Il2CppRGCTXDataType)3, 8179 },
	{ (Il2CppRGCTXDataType)2, 1874 },
	{ (Il2CppRGCTXDataType)3, 6983 },
	{ (Il2CppRGCTXDataType)3, 3969 },
	{ (Il2CppRGCTXDataType)2, 1375 },
	{ (Il2CppRGCTXDataType)2, 1871 },
	{ (Il2CppRGCTXDataType)3, 6945 },
	{ (Il2CppRGCTXDataType)3, 2956 },
	{ (Il2CppRGCTXDataType)3, 2955 },
	{ (Il2CppRGCTXDataType)3, 3970 },
	{ (Il2CppRGCTXDataType)2, 1863 },
	{ (Il2CppRGCTXDataType)3, 6911 },
	{ (Il2CppRGCTXDataType)3, 8178 },
	{ (Il2CppRGCTXDataType)2, 1870 },
	{ (Il2CppRGCTXDataType)3, 6944 },
	{ (Il2CppRGCTXDataType)3, 3983 },
	{ (Il2CppRGCTXDataType)2, 1377 },
	{ (Il2CppRGCTXDataType)2, 1879 },
	{ (Il2CppRGCTXDataType)3, 7030 },
	{ (Il2CppRGCTXDataType)3, 4343 },
	{ (Il2CppRGCTXDataType)3, 2059 },
	{ (Il2CppRGCTXDataType)3, 2960 },
	{ (Il2CppRGCTXDataType)3, 2959 },
	{ (Il2CppRGCTXDataType)3, 2058 },
	{ (Il2CppRGCTXDataType)3, 3984 },
	{ (Il2CppRGCTXDataType)2, 1865 },
	{ (Il2CppRGCTXDataType)3, 6913 },
	{ (Il2CppRGCTXDataType)3, 8180 },
	{ (Il2CppRGCTXDataType)2, 1878 },
	{ (Il2CppRGCTXDataType)3, 7029 },
	{ (Il2CppRGCTXDataType)3, 2950 },
	{ (Il2CppRGCTXDataType)3, 2951 },
	{ (Il2CppRGCTXDataType)3, 2962 },
	{ (Il2CppRGCTXDataType)3, 84 },
	{ (Il2CppRGCTXDataType)2, 310 },
	{ (Il2CppRGCTXDataType)3, 86 },
	{ (Il2CppRGCTXDataType)2, 501 },
	{ (Il2CppRGCTXDataType)3, 83 },
	{ (Il2CppRGCTXDataType)3, 85 },
	{ (Il2CppRGCTXDataType)2, 484 },
	{ (Il2CppRGCTXDataType)3, 0 },
	{ (Il2CppRGCTXDataType)2, 887 },
	{ (Il2CppRGCTXDataType)3, 2949 },
	{ (Il2CppRGCTXDataType)2, 486 },
	{ (Il2CppRGCTXDataType)3, 2 },
	{ (Il2CppRGCTXDataType)2, 486 },
	{ (Il2CppRGCTXDataType)2, 1631 },
	{ (Il2CppRGCTXDataType)3, 5686 },
	{ (Il2CppRGCTXDataType)3, 5688 },
	{ (Il2CppRGCTXDataType)3, 3189 },
	{ (Il2CppRGCTXDataType)3, 2623 },
	{ (Il2CppRGCTXDataType)2, 792 },
	{ (Il2CppRGCTXDataType)2, 2213 },
	{ (Il2CppRGCTXDataType)2, 503 },
	{ (Il2CppRGCTXDataType)3, 124 },
	{ (Il2CppRGCTXDataType)3, 5687 },
	{ (Il2CppRGCTXDataType)2, 250 },
	{ (Il2CppRGCTXDataType)2, 1227 },
	{ (Il2CppRGCTXDataType)3, 5689 },
	{ (Il2CppRGCTXDataType)3, 5690 },
	{ (Il2CppRGCTXDataType)2, 975 },
	{ (Il2CppRGCTXDataType)3, 3188 },
	{ (Il2CppRGCTXDataType)2, 2207 },
	{ (Il2CppRGCTXDataType)2, 1081 },
	{ (Il2CppRGCTXDataType)2, 1158 },
	{ (Il2CppRGCTXDataType)3, 2944 },
	{ (Il2CppRGCTXDataType)3, 2945 },
	{ (Il2CppRGCTXDataType)3, 7974 },
	{ (Il2CppRGCTXDataType)2, 505 },
	{ (Il2CppRGCTXDataType)3, 144 },
	{ (Il2CppRGCTXDataType)3, 3190 },
	{ (Il2CppRGCTXDataType)3, 7119 },
	{ (Il2CppRGCTXDataType)2, 443 },
	{ (Il2CppRGCTXDataType)3, 5691 },
	{ (Il2CppRGCTXDataType)2, 1633 },
	{ (Il2CppRGCTXDataType)3, 5692 },
	{ (Il2CppRGCTXDataType)3, 3181 },
	{ (Il2CppRGCTXDataType)2, 502 },
	{ (Il2CppRGCTXDataType)3, 105 },
	{ (Il2CppRGCTXDataType)3, 6140 },
	{ (Il2CppRGCTXDataType)2, 578 },
	{ (Il2CppRGCTXDataType)3, 586 },
	{ (Il2CppRGCTXDataType)3, 6145 },
	{ (Il2CppRGCTXDataType)3, 2026 },
	{ (Il2CppRGCTXDataType)2, 336 },
	{ (Il2CppRGCTXDataType)3, 6141 },
	{ (Il2CppRGCTXDataType)2, 1683 },
	{ (Il2CppRGCTXDataType)3, 614 },
	{ (Il2CppRGCTXDataType)2, 590 },
	{ (Il2CppRGCTXDataType)2, 763 },
	{ (Il2CppRGCTXDataType)3, 2038 },
	{ (Il2CppRGCTXDataType)3, 6142 },
	{ (Il2CppRGCTXDataType)3, 2021 },
	{ (Il2CppRGCTXDataType)3, 2022 },
	{ (Il2CppRGCTXDataType)3, 2020 },
	{ (Il2CppRGCTXDataType)3, 2023 },
	{ (Il2CppRGCTXDataType)2, 759 },
	{ (Il2CppRGCTXDataType)2, 2205 },
	{ (Il2CppRGCTXDataType)3, 2948 },
	{ (Il2CppRGCTXDataType)3, 2025 },
	{ (Il2CppRGCTXDataType)2, 1055 },
	{ (Il2CppRGCTXDataType)3, 2024 },
	{ (Il2CppRGCTXDataType)2, 995 },
	{ (Il2CppRGCTXDataType)2, 2171 },
	{ (Il2CppRGCTXDataType)2, 1094 },
	{ (Il2CppRGCTXDataType)2, 1161 },
	{ (Il2CppRGCTXDataType)3, 2615 },
	{ (Il2CppRGCTXDataType)2, 789 },
	{ (Il2CppRGCTXDataType)3, 3225 },
	{ (Il2CppRGCTXDataType)3, 3226 },
	{ (Il2CppRGCTXDataType)2, 980 },
	{ (Il2CppRGCTXDataType)3, 3229 },
	{ (Il2CppRGCTXDataType)2, 980 },
	{ (Il2CppRGCTXDataType)3, 3230 },
	{ (Il2CppRGCTXDataType)2, 996 },
	{ (Il2CppRGCTXDataType)3, 3234 },
	{ (Il2CppRGCTXDataType)3, 3238 },
	{ (Il2CppRGCTXDataType)3, 3237 },
	{ (Il2CppRGCTXDataType)2, 2224 },
	{ (Il2CppRGCTXDataType)3, 3228 },
	{ (Il2CppRGCTXDataType)3, 3227 },
	{ (Il2CppRGCTXDataType)3, 3235 },
	{ (Il2CppRGCTXDataType)2, 1224 },
	{ (Il2CppRGCTXDataType)3, 3232 },
	{ (Il2CppRGCTXDataType)3, 8482 },
	{ (Il2CppRGCTXDataType)2, 766 },
	{ (Il2CppRGCTXDataType)3, 2052 },
	{ (Il2CppRGCTXDataType)1, 1052 },
	{ (Il2CppRGCTXDataType)2, 2179 },
	{ (Il2CppRGCTXDataType)3, 3231 },
	{ (Il2CppRGCTXDataType)1, 2179 },
	{ (Il2CppRGCTXDataType)1, 1224 },
	{ (Il2CppRGCTXDataType)2, 2224 },
	{ (Il2CppRGCTXDataType)2, 2179 },
	{ (Il2CppRGCTXDataType)2, 1098 },
	{ (Il2CppRGCTXDataType)2, 1163 },
	{ (Il2CppRGCTXDataType)3, 3236 },
	{ (Il2CppRGCTXDataType)3, 3233 },
	{ (Il2CppRGCTXDataType)3, 3239 },
	{ (Il2CppRGCTXDataType)2, 222 },
	{ (Il2CppRGCTXDataType)3, 2060 },
	{ (Il2CppRGCTXDataType)2, 321 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	186,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	51,
	s_rgctxIndices,
	258,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
