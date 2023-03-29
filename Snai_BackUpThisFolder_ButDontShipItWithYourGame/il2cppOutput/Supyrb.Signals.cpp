#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Type,Supyrb.ABaseSignal>
struct Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Supyrb.ABaseSignal>
struct KeyCollection_t40AAE1D0EE520CEB475B4EB082D43371A0576C48;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// Supyrb.OrderedList`1<System.Action>
struct OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7;
// Supyrb.OrderedList`1<System.Object>
struct OrderedList_1_tC5B156ED74BDBBFF707A91DAC5DF56A59AE0C355;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Supyrb.ABaseSignal>
struct ValueCollection_t51ECF028E8128D40372D9000D1C3875EF50B852B;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Supyrb.ABaseSignal>[]
struct EntryU5BU5D_t36EC5E6F660111471245160188869FD9068EF61B;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Supyrb.ABaseSignal
struct ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9;
// Supyrb.ASignal
struct ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Supyrb.Signal
struct Signal_t3D7DD4F8181B5D3556520CC2A81725DD0E6FC534;
// Supyrb.SignalHub
struct SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Supyrb.Signals/SignalDelegate
struct SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827;

IL2CPP_EXTERN_C RuntimeClass* ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_tA3864479C082DBAF33C96C93AAB949CE6786B9C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2DB488D0EF457F9ED7EB3EF683978732F63B3247;
IL2CPP_EXTERN_C String_t* _stringLiteral87406229B9DB2CC825B27E47C65B607683B87076;
IL2CPP_EXTERN_C String_t* _stringLiteral94134215DD778C15149F6774954B32A0CAC89A37;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m29579B7F049B5697DE6CA2855A2FC0B0D26D1E9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mA3437C09E5F5AEC863C1C84C8DB6C2F5A3E11F77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m6DC05B4F33F3F76627DAE2B09D0FA69BA62F184C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB743D6F7E5236635D754E2E80788DDD2D42B011A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m929229744C1F892D8C472A053E7AAD24F526FFC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedList_1_Add_m54D6F3050D5D9B48CC2B49571BA701D0EF7B945A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedList_1_Clear_m7F148E5A6A4279C0851ADFCDBDEE2E54A2003CA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedList_1_Remove_mE27C33D82C64D0EAD9CB80F927280A887F37DF92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedList_1__ctor_m63813ACA223FEA3CE3958319D8888250551A9213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedList_1_get_Count_m162B9826E91934E2FB60C7938F0E28C0F543947D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedList_1_get_Item_mB17552B8BB6D186163DB765A9AF36DF971627883_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t72BDCE494100F5D76B9F906D2641159824020E6D 
{
};

// System.Collections.Generic.Dictionary`2<System.Type,Supyrb.ABaseSignal>
struct Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t36EC5E6F660111471245160188869FD9068EF61B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t40AAE1D0EE520CEB475B4EB082D43371A0576C48* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t51ECF028E8128D40372D9000D1C3875EF50B852B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Supyrb.OrderedList`1<System.Action>
struct OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Int32> Supyrb.OrderedList`1::sortedOrders
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___sortedOrders_0;
	// System.Collections.Generic.List`1<T> Supyrb.OrderedList`1::values
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___values_1;
	// System.Boolean Supyrb.OrderedList`1::uniqueValuesOnly
	bool ___uniqueValuesOnly_2;
};

// Supyrb.ABaseSignal
struct ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9  : public RuntimeObject
{
	// System.String Supyrb.ABaseSignal::_hash
	String_t* ____hash_0;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Supyrb.SignalHub
struct SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,Supyrb.ABaseSignal> Supyrb.SignalHub::signals
	Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F* ___signals_0;
};

// Supyrb.Signals
struct Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E  : public RuntimeObject
{
};

struct Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_StaticFields
{
	// Supyrb.Signals/SignalDelegate Supyrb.Signals::OnSignalDispatch
	SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* ___OnSignalDispatch_0;
	// Supyrb.SignalHub Supyrb.Signals::signalHub
	SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1* ___signalHub_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Supyrb.ASignal
struct ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC  : public ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9
{
	// System.Int32 Supyrb.ASignal::currentIndex
	int32_t ___currentIndex_1;
	// Supyrb.ASignal/State Supyrb.ASignal::state
	int32_t ___state_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Supyrb.Signal
struct Signal_t3D7DD4F8181B5D3556520CC2A81725DD0E6FC534  : public ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC
{
	// Supyrb.OrderedList`1<System.Action> Supyrb.Signal::listeners
	OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7* ___listeners_3;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Supyrb.Signals/SignalDelegate
struct SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 Supyrb.OrderedList`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedList_1_get_Count_m320D6DD7F0A30D01CEFA308030B53D0F31A12838_gshared (OrderedList_1_tC5B156ED74BDBBFF707A91DAC5DF56A59AE0C355* __this, const RuntimeMethod* method) ;
// System.Void Supyrb.OrderedList`1<System.Object>::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedList_1__ctor_m62334D211129A77AE0059C2517755F06A8CF5D7D_gshared (OrderedList_1_tC5B156ED74BDBBFF707A91DAC5DF56A59AE0C355* __this, bool ___uniqueValuesOnly0, const RuntimeMethod* method) ;
// System.Void Supyrb.OrderedList`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedList_1_Clear_mA6EFDB9D7FB8F283E2C791297B9562B6536C8DEF_gshared (OrderedList_1_tC5B156ED74BDBBFF707A91DAC5DF56A59AE0C355* __this, const RuntimeMethod* method) ;
// System.Int32 Supyrb.OrderedList`1<System.Object>::Add(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedList_1_Add_m25D67689B9623DE10417935CE5DFD9601A930223_gshared (OrderedList_1_tC5B156ED74BDBBFF707A91DAC5DF56A59AE0C355* __this, int32_t ___order0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 Supyrb.OrderedList`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedList_1_Remove_mAFC09D08D29A9DBFDB4F49DEDEC90FD490A9F8BF_gshared (OrderedList_1_tC5B156ED74BDBBFF707A91DAC5DF56A59AE0C355* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// T Supyrb.OrderedList`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedList_1_get_Item_mB6F6B98D1158E6E7BE98618225F31FD89CD403D3_gshared (OrderedList_1_tC5B156ED74BDBBFF707A91DAC5DF56A59AE0C355* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Supyrb.ABaseSignal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABaseSignal__ctor_m64350067FCA15FB951CD6EF3E7B3F7A764549D67 (ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* __this, const RuntimeMethod* method) ;
// System.Void Supyrb.ASignal::BeginSignalProfilerSample(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_BeginSignalProfilerSample_m897C691768B63C738FCFD4027F98D11B81BBB22C (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, String_t* ___sampleName0, const RuntimeMethod* method) ;
// System.Void Supyrb.ASignal::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_Run_m4FB3D8E606378E67CABE83C2CEB34C109D9D414F (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, const RuntimeMethod* method) ;
// System.Void Supyrb.ASignal::EndSignalProfilerSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_EndSignalProfilerSample_m7A4D7A75963786EC1E3F5885FCC4D0B59DC02BD2 (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, const RuntimeMethod* method) ;
// System.Void Supyrb.Signals::LogSignalDispatch(Supyrb.ASignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signals_LogSignalDispatch_m83813E2C597EF85F0D47851D97F0B230B47E787B (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* ___signal0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Int32 Supyrb.OrderedList`1<System.Action>::get_Count()
inline int32_t OrderedList_1_get_Count_m162B9826E91934E2FB60C7938F0E28C0F543947D (OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7*, const RuntimeMethod*))OrderedList_1_get_Count_m320D6DD7F0A30D01CEFA308030B53D0F31A12838_gshared)(__this, method);
}
// System.Void Supyrb.ASignal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal__ctor_mF3BAB85F1F3591B5E5FEE820789AF79A90EEEB79 (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, const RuntimeMethod* method) ;
// System.Void Supyrb.OrderedList`1<System.Action>::.ctor(System.Boolean)
inline void OrderedList_1__ctor_m63813ACA223FEA3CE3958319D8888250551A9213 (OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7* __this, bool ___uniqueValuesOnly0, const RuntimeMethod* method)
{
	((  void (*) (OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7*, bool, const RuntimeMethod*))OrderedList_1__ctor_m62334D211129A77AE0059C2517755F06A8CF5D7D_gshared)(__this, ___uniqueValuesOnly0, method);
}
// System.Void Supyrb.OrderedList`1<System.Action>::Clear()
inline void OrderedList_1_Clear_m7F148E5A6A4279C0851ADFCDBDEE2E54A2003CA4 (OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7* __this, const RuntimeMethod* method)
{
	((  void (*) (OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7*, const RuntimeMethod*))OrderedList_1_Clear_mA6EFDB9D7FB8F283E2C791297B9562B6536C8DEF_gshared)(__this, method);
}
// System.Int32 Supyrb.OrderedList`1<System.Action>::Add(System.Int32,T)
inline int32_t OrderedList_1_Add_m54D6F3050D5D9B48CC2B49571BA701D0EF7B945A (OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7* __this, int32_t ___order0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7*, int32_t, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))OrderedList_1_Add_m25D67689B9623DE10417935CE5DFD9601A930223_gshared)(__this, ___order0, ___value1, method);
}
// System.Void Supyrb.ASignal::AddListenerAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_AddListenerAt_m67D0317BD1F61516B132C96D5329243C704C45A7 (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 Supyrb.OrderedList`1<System.Action>::Remove(T)
inline int32_t OrderedList_1_Remove_mE27C33D82C64D0EAD9CB80F927280A887F37DF92 (OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))OrderedList_1_Remove_mAFC09D08D29A9DBFDB4F49DEDEC90FD490A9F8BF_gshared)(__this, ___value0, method);
}
// System.Void Supyrb.ASignal::RemoveListenerAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_RemoveListenerAt_m4B973787D792D5CA5DDEB200AE4F270D47D0E67E (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Supyrb.ASignal::StartDispatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_StartDispatch_m69B242B9E825D0532E3EF81924E626238AA7ED2E (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, const RuntimeMethod* method) ;
// T Supyrb.OrderedList`1<System.Action>::get_Item(System.Int32)
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* OrderedList_1_get_Item_mB17552B8BB6D186163DB765A9AF36DF971627883 (OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7*, int32_t, const RuntimeMethod*))OrderedList_1_get_Item_mB6F6B98D1158E6E7BE98618225F31FD89CD403D3_gshared)(__this, ___index0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// Supyrb.ABaseSignal Supyrb.SignalHub::Get(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* SignalHub_Get_mDA6F963B4E0F6CA9E5CB40A6EAAFEACFCAD99CF6 (SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1* __this, Type_t* ___signalType0, const RuntimeMethod* method) ;
// System.Int32 Supyrb.SignalHub::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignalHub_get_Count_mDA271F2DECA34C6E8352230868F6462DD0150A15 (SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1* __this, const RuntimeMethod* method) ;
// System.Void Supyrb.SignalHub::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalHub_Clear_mCC4C88A5780F8D2DB277EA083A42E89F6A777243 (SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1* __this, const RuntimeMethod* method) ;
// System.Void Supyrb.Signals/SignalDelegate::Invoke(Supyrb.ASignal)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_inline (SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* __this, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* ___signal0, const RuntimeMethod* method) ;
// System.Void Supyrb.SignalHub::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalHub__ctor_mD4F6341FBC3EB37DFC8F98A551390798ADD57F48 (SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Supyrb.ABaseSignal>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m6DC05B4F33F3F76627DAE2B09D0FA69BA62F184C (Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F* __this, Type_t* ___key0, ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F*, Type_t*, ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// Supyrb.ABaseSignal Supyrb.SignalHub::Bind(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* SignalHub_Bind_m7C782888A9C946058DD2DD00111815F125AFC883 (SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1* __this, Type_t* ___signalType0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,Supyrb.ABaseSignal>::get_Count()
inline int32_t Dictionary_2_get_Count_m929229744C1F892D8C472A053E7AAD24F526FFC0 (Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Supyrb.ABaseSignal>::Clear()
inline void Dictionary_2_Clear_mA3437C09E5F5AEC863C1C84C8DB6C2F5A3E11F77 (Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Supyrb.ABaseSignal>::Add(TKey,TValue)
inline void Dictionary_2_Add_m29579B7F049B5697DE6CA2855A2FC0B0D26D1E9E (Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F* __this, Type_t* ___key0, ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F*, Type_t*, ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Supyrb.ABaseSignal>::.ctor()
inline void Dictionary_2__ctor_mB743D6F7E5236635D754E2E80788DDD2D42B011A (Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Supyrb.ABaseSignal::get_Hash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ABaseSignal_get_Hash_m8A838D118CB252303BD7E6339F53B499E532B6B9 (ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* __this, const RuntimeMethod* method) 
{
	{
		// if (string.IsNullOrEmpty(_hash))
		String_t* L_0 = __this->____hash_0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// _hash = this.GetType().ToString();
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		__this->____hash_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hash_0), (void*)L_3);
	}

IL_001e:
	{
		// return _hash;
		String_t* L_4 = __this->____hash_0;
		return L_4;
	}
}
// System.Void Supyrb.ABaseSignal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABaseSignal__ctor_m64350067FCA15FB951CD6EF3E7B3F7A764549D67 (ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* __this, const RuntimeMethod* method) 
{
	{
		// protected ABaseSignal()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Supyrb.ASignal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal__ctor_mF3BAB85F1F3591B5E5FEE820789AF79A90EEEB79 (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, const RuntimeMethod* method) 
{
	{
		// protected ASignal() : base()
		ABaseSignal__ctor_m64350067FCA15FB951CD6EF3E7B3F7A764549D67(__this, NULL);
		// this.currentIndex = 0;
		__this->___currentIndex_1 = 0;
		// this.state = State.Idle;
		__this->___state_2 = 0;
		// }
		return;
	}
}
// System.Void Supyrb.ASignal::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_Pause_mE16B94DCA425E6C099E4D77670443BF74B9558CD (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, const RuntimeMethod* method) 
{
	{
		// this.state = State.Paused;
		__this->___state_2 = 2;
		// }
		return;
	}
}
// System.Void Supyrb.ASignal::Continue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_Continue_mE05FD2BECBD70F4804FBAA85E2643712987852D6 (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94134215DD778C15149F6774954B32A0CAC89A37);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (state != State.Paused)
		int32_t L_0 = __this->___state_2;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// BeginSignalProfilerSample("Continue Signal");
		ASignal_BeginSignalProfilerSample_m897C691768B63C738FCFD4027F98D11B81BBB22C(__this, _stringLiteral94134215DD778C15149F6774954B32A0CAC89A37, NULL);
		// currentIndex++;
		int32_t L_1 = __this->___currentIndex_1;
		__this->___currentIndex_1 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// state = State.Running;
		__this->___state_2 = 1;
		// Run();
		ASignal_Run_m4FB3D8E606378E67CABE83C2CEB34C109D9D414F(__this, NULL);
		// EndSignalProfilerSample();
		ASignal_EndSignalProfilerSample_m7A4D7A75963786EC1E3F5885FCC4D0B59DC02BD2(__this, NULL);
		// }
		return;
	}
}
// System.Void Supyrb.ASignal::Consume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_Consume_m42C7686E806CD4CE1AC3369319D8B2C2AB2A2739 (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, const RuntimeMethod* method) 
{
	{
		// state = State.Consumed;
		__this->___state_2 = 3;
		// }
		return;
	}
}
// System.Void Supyrb.ASignal::StartDispatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_StartDispatch_m69B242B9E825D0532E3EF81924E626238AA7ED2E (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentIndex = 0;
		__this->___currentIndex_1 = 0;
		// state = State.Running;
		__this->___state_2 = 1;
		// Signals.LogSignalDispatch(this);
		il2cpp_codegen_runtime_class_init_inline(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		Signals_LogSignalDispatch_m83813E2C597EF85F0D47851D97F0B230B47E787B(__this, NULL);
		// Run();
		ASignal_Run_m4FB3D8E606378E67CABE83C2CEB34C109D9D414F(__this, NULL);
		// }
		return;
	}
}
// System.Void Supyrb.ASignal::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_Run_m4FB3D8E606378E67CABE83C2CEB34C109D9D414F (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, const RuntimeMethod* method) 
{

IL_0000:
	{
		// if (currentIndex >= ListenerCount)
		int32_t L_0 = __this->___currentIndex_1;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Supyrb.ASignal::get_ListenerCount() */, __this);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		// OnFinish();
		VirtualActionInvoker0::Invoke(6 /* System.Void Supyrb.ASignal::OnFinish() */, __this);
		// return;
		return;
	}

IL_0015:
	{
		// Invoke(currentIndex);
		int32_t L_2 = __this->___currentIndex_1;
		VirtualActionInvoker1< int32_t >::Invoke(7 /* System.Void Supyrb.ASignal::Invoke(System.Int32) */, __this, L_2);
		// if (state != State.Running)
		int32_t L_3 = __this->___state_2;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		// return;
		return;
	}

IL_002b:
	{
		// currentIndex++;
		int32_t L_4 = __this->___currentIndex_1;
		__this->___currentIndex_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// while (true)
		goto IL_0000;
	}
}
// System.Void Supyrb.ASignal::AddListenerAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_AddListenerAt_m67D0317BD1F61516B132C96D5329243C704C45A7 (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// if (state == State.Idle)
		int32_t L_0 = __this->___state_2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (currentIndex >= index)
		int32_t L_1 = __this->___currentIndex_1;
		int32_t L_2 = ___index0;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		// currentIndex++;
		int32_t L_3 = __this->___currentIndex_1;
		__this->___currentIndex_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Supyrb.ASignal::RemoveListenerAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_RemoveListenerAt_m4B973787D792D5CA5DDEB200AE4F270D47D0E67E (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// if (state == State.Idle)
		int32_t L_0 = __this->___state_2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (currentIndex >= index)
		int32_t L_1 = __this->___currentIndex_1;
		int32_t L_2 = ___index0;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		// currentIndex--;
		int32_t L_3 = __this->___currentIndex_1;
		__this->___currentIndex_1 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Supyrb.ASignal::OnFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_OnFinish_m97E453068726A6B8A1B8EC0E1BF9791876F27CD8 (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, const RuntimeMethod* method) 
{
	{
		// state = State.Idle;
		__this->___state_2 = 0;
		// }
		return;
	}
}
// System.Void Supyrb.ASignal::BeginSignalProfilerSample(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_BeginSignalProfilerSample_m897C691768B63C738FCFD4027F98D11B81BBB22C (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, String_t* ___sampleName0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Supyrb.ASignal::EndSignalProfilerSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASignal_EndSignalProfilerSample_m7A4D7A75963786EC1E3F5885FCC4D0B59DC02BD2 (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String Supyrb.ASignal::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ASignal_ToString_m402313B89E3CDE19345A3C8EABA530089742404B (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tA3864479C082DBAF33C96C93AAB949CE6786B9C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87406229B9DB2CC825B27E47C65B607683B87076);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("Signal {0}: {1} Listeners, State {2}, Index {3}",
		//     this.GetType().Name, ListenerCount, state, currentIndex);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_1;
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Supyrb.ASignal::get_ListenerCount() */, __this);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = __this->___state_2;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(State_tA3864479C082DBAF33C96C93AAB949CE6786B9C5_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		int32_t L_13 = __this->___currentIndex_1;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		String_t* L_16;
		L_16 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral87406229B9DB2CC825B27E47C65B607683B87076, L_12, NULL);
		return L_16;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Supyrb.Signal::get_ListenerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Signal_get_ListenerCount_m79CB9539028D80B497A86A1DF4AC7A6CBA5DEEBA (Signal_t3D7DD4F8181B5D3556520CC2A81725DD0E6FC534* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedList_1_get_Count_m162B9826E91934E2FB60C7938F0E28C0F543947D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return listeners.Count; }
		OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7* L_0 = __this->___listeners_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = OrderedList_1_get_Count_m162B9826E91934E2FB60C7938F0E28C0F543947D(L_0, OrderedList_1_get_Count_m162B9826E91934E2FB60C7938F0E28C0F543947D_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Supyrb.Signal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signal__ctor_m48752180D1B6B307D8D212A2539EC13E2E93461D (Signal_t3D7DD4F8181B5D3556520CC2A81725DD0E6FC534* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedList_1__ctor_m63813ACA223FEA3CE3958319D8888250551A9213_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Signal() : base()
		ASignal__ctor_mF3BAB85F1F3591B5E5FEE820789AF79A90EEEB79(__this, NULL);
		// this.listeners = new OrderedList<Action>(true);
		OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7* L_0 = (OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7*)il2cpp_codegen_object_new(OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OrderedList_1__ctor_m63813ACA223FEA3CE3958319D8888250551A9213(L_0, (bool)1, OrderedList_1__ctor_m63813ACA223FEA3CE3958319D8888250551A9213_RuntimeMethod_var);
		__this->___listeners_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listeners_3), (void*)L_0);
		// }
		return;
	}
}
// System.Void Supyrb.Signal::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signal_Clear_m6518433C0C96804621E226E2331F227BFE6A74F2 (Signal_t3D7DD4F8181B5D3556520CC2A81725DD0E6FC534* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedList_1_Clear_m7F148E5A6A4279C0851ADFCDBDEE2E54A2003CA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// listeners.Clear();
		OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7* L_0 = __this->___listeners_3;
		NullCheck(L_0);
		OrderedList_1_Clear_m7F148E5A6A4279C0851ADFCDBDEE2E54A2003CA4(L_0, OrderedList_1_Clear_m7F148E5A6A4279C0851ADFCDBDEE2E54A2003CA4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Supyrb.Signal::AddListener(System.Action,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Signal_AddListener_mEC608E1F694093864E11D2F55954AE7B3DB2BD46 (Signal_t3D7DD4F8181B5D3556520CC2A81725DD0E6FC534* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___listener0, int32_t ___order1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedList_1_Add_m54D6F3050D5D9B48CC2B49571BA701D0EF7B945A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var index = listeners.Add(order, listener);
		OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7* L_0 = __this->___listeners_3;
		int32_t L_1 = ___order1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___listener0;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = OrderedList_1_Add_m54D6F3050D5D9B48CC2B49571BA701D0EF7B945A(L_0, L_1, L_2, OrderedList_1_Add_m54D6F3050D5D9B48CC2B49571BA701D0EF7B945A_RuntimeMethod_var);
		V_0 = L_3;
		// if (index < 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// AddListenerAt(index);
		int32_t L_5 = V_0;
		ASignal_AddListenerAt_m67D0317BD1F61516B132C96D5329243C704C45A7(__this, L_5, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Supyrb.Signal::RemoveListener(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Signal_RemoveListener_mDB00B34ECCAF2109E3032D019D58039A2CA8D5CC (Signal_t3D7DD4F8181B5D3556520CC2A81725DD0E6FC534* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedList_1_Remove_mE27C33D82C64D0EAD9CB80F927280A887F37DF92_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var index = listeners.Remove(listener);
		OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7* L_0 = __this->___listeners_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___listener0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = OrderedList_1_Remove_mE27C33D82C64D0EAD9CB80F927280A887F37DF92(L_0, L_1, OrderedList_1_Remove_mE27C33D82C64D0EAD9CB80F927280A887F37DF92_RuntimeMethod_var);
		V_0 = L_2;
		// if (index < 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// RemoveListenerAt(index);
		int32_t L_4 = V_0;
		ASignal_RemoveListenerAt_m4B973787D792D5CA5DDEB200AE4F270D47D0E67E(__this, L_4, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void Supyrb.Signal::Dispatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signal_Dispatch_mC8C29F46190596190E7D72CC116B9D5D83DAF28F (Signal_t3D7DD4F8181B5D3556520CC2A81725DD0E6FC534* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DB488D0EF457F9ED7EB3EF683978732F63B3247);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BeginSignalProfilerSample("Dispatch Signal");
		ASignal_BeginSignalProfilerSample_m897C691768B63C738FCFD4027F98D11B81BBB22C(__this, _stringLiteral2DB488D0EF457F9ED7EB3EF683978732F63B3247, NULL);
		// StartDispatch();
		ASignal_StartDispatch_m69B242B9E825D0532E3EF81924E626238AA7ED2E(__this, NULL);
		// EndSignalProfilerSample();
		ASignal_EndSignalProfilerSample_m7A4D7A75963786EC1E3F5885FCC4D0B59DC02BD2(__this, NULL);
		// }
		return;
	}
}
// System.Void Supyrb.Signal::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signal_Invoke_mBCA775670F510243F2A2DDB72C4FB93B17F95321 (Signal_t3D7DD4F8181B5D3556520CC2A81725DD0E6FC534* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedList_1_get_Item_mB17552B8BB6D186163DB765A9AF36DF971627883_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// listeners[index].Invoke();
		OrderedList_1_t6A8E231131E7FE8170EA92CC1A32606FF386F2D7* L_0 = __this->___listeners_3;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2;
		L_2 = OrderedList_1_get_Item_mB17552B8BB6D186163DB765A9AF36DF971627883(L_0, L_1, OrderedList_1_get_Item_mB17552B8BB6D186163DB765A9AF36DF971627883_RuntimeMethod_var);
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Supyrb.Signals::add_OnSignalDispatch(Supyrb.Signals/SignalDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signals_add_OnSignalDispatch_m1F83CBD4AE1D7B8E0AC98EBA6B30CEEFD69A1469 (SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* V_0 = NULL;
	SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* V_1 = NULL;
	SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_0 = ((Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_StaticFields*)il2cpp_codegen_static_fields_for(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var))->___OnSignalDispatch_0;
		V_0 = L_0;
	}

IL_0006:
	{
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_1 = V_0;
		V_1 = L_1;
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_2 = V_1;
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827*)CastclassSealed((RuntimeObject*)L_4, SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_5 = V_2;
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_6 = V_1;
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_7;
		L_7 = InterlockedCompareExchangeImpl<SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827*>((&((Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_StaticFields*)il2cpp_codegen_static_fields_for(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var))->___OnSignalDispatch_0), L_5, L_6);
		V_0 = L_7;
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_8 = V_0;
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_9 = V_1;
		if ((!(((RuntimeObject*)(SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827*)L_8) == ((RuntimeObject*)(SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Supyrb.Signals::remove_OnSignalDispatch(Supyrb.Signals/SignalDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signals_remove_OnSignalDispatch_m24DB5E3CA42D64CDD7246F7740C212B2AF7FADF9 (SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* V_0 = NULL;
	SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* V_1 = NULL;
	SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_0 = ((Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_StaticFields*)il2cpp_codegen_static_fields_for(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var))->___OnSignalDispatch_0;
		V_0 = L_0;
	}

IL_0006:
	{
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_1 = V_0;
		V_1 = L_1;
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_2 = V_1;
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827*)CastclassSealed((RuntimeObject*)L_4, SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_5 = V_2;
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_6 = V_1;
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_7;
		L_7 = InterlockedCompareExchangeImpl<SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827*>((&((Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_StaticFields*)il2cpp_codegen_static_fields_for(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var))->___OnSignalDispatch_0), L_5, L_6);
		V_0 = L_7;
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_8 = V_0;
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_9 = V_1;
		if ((!(((RuntimeObject*)(SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827*)L_8) == ((RuntimeObject*)(SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// Supyrb.ABaseSignal Supyrb.Signals::Get(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* Signals_Get_m9693252E3CD026432CA34A17E027AED87BCB849A (Type_t* ___signalType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return signalHub.Get(signalType);
		il2cpp_codegen_runtime_class_init_inline(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1* L_0 = ((Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_StaticFields*)il2cpp_codegen_static_fields_for(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var))->___signalHub_1;
		Type_t* L_1 = ___signalType0;
		NullCheck(L_0);
		ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* L_2;
		L_2 = SignalHub_Get_mDA6F963B4E0F6CA9E5CB40A6EAAFEACFCAD99CF6(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 Supyrb.Signals::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Signals_get_Count_m5FD0159D91E2F8C0EEE747749E09A5A1F552C6AA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return signalHub.Count; }
		il2cpp_codegen_runtime_class_init_inline(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1* L_0 = ((Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_StaticFields*)il2cpp_codegen_static_fields_for(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var))->___signalHub_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SignalHub_get_Count_mDA271F2DECA34C6E8352230868F6462DD0150A15(L_0, NULL);
		return L_1;
	}
}
// System.Void Supyrb.Signals::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signals_Clear_m1C7879101C505ECEA62DADE0C3740B6B453B1624 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// signalHub.Clear();
		il2cpp_codegen_runtime_class_init_inline(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1* L_0 = ((Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_StaticFields*)il2cpp_codegen_static_fields_for(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var))->___signalHub_1;
		NullCheck(L_0);
		SignalHub_Clear_mCC4C88A5780F8D2DB277EA083A42E89F6A777243(L_0, NULL);
		// OnSignalDispatch = null;
		((Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_StaticFields*)il2cpp_codegen_static_fields_for(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var))->___OnSignalDispatch_0 = (SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_StaticFields*)il2cpp_codegen_static_fields_for(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var))->___OnSignalDispatch_0), (void*)(SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827*)NULL);
		// }
		return;
	}
}
// System.Void Supyrb.Signals::LogSignalDispatch(Supyrb.ASignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signals_LogSignalDispatch_m83813E2C597EF85F0D47851D97F0B230B47E787B (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* ___signal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnSignalDispatch != null)
		il2cpp_codegen_runtime_class_init_inline(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_0 = ((Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_StaticFields*)il2cpp_codegen_static_fields_for(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var))->___OnSignalDispatch_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// OnSignalDispatch(signal);
		il2cpp_codegen_runtime_class_init_inline(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* L_1 = ((Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_StaticFields*)il2cpp_codegen_static_fields_for(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var))->___OnSignalDispatch_0;
		ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* L_2 = ___signal0;
		NullCheck(L_1);
		SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_inline(L_1, L_2, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Supyrb.Signals::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signals__cctor_m465C963CADA4C3961979BD315D97CC5945402D56 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly SignalHub signalHub = new SignalHub();
		SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1* L_0 = (SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1*)il2cpp_codegen_object_new(SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SignalHub__ctor_mD4F6341FBC3EB37DFC8F98A551390798ADD57F48(L_0, NULL);
		((Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_StaticFields*)il2cpp_codegen_static_fields_for(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var))->___signalHub_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_StaticFields*)il2cpp_codegen_static_fields_for(Signals_t20638E0DD582A3C0BC025E2D2699887BA3C3955E_il2cpp_TypeInfo_var))->___signalHub_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_Multicast(SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* __this, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* ___signal0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* currentDelegate = reinterpret_cast<SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___signal0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_Open(SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* __this, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* ___signal0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___signal0, method);
}
void SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_OpenStaticInvoker(SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* __this, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* ___signal0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* >::Invoke(__this->___method_ptr_0, method, NULL, ___signal0);
}
void SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_ClosedStaticInvoker(SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* __this, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* ___signal0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___signal0);
}
void SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_OpenVirtual(SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* __this, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* ___signal0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___signal0);
}
void SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_OpenInterface(SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* __this, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* ___signal0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___signal0);
}
void SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_OpenGenericVirtual(SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* __this, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* ___signal0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___signal0);
}
void SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_OpenGenericInterface(SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* __this, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* ___signal0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___signal0);
}
// System.Void Supyrb.Signals/SignalDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalDelegate__ctor_m7C77B7B90E1F0B941BB9AE828FCAA978BB9B36D0 (SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_Multicast;
}
// System.Void Supyrb.Signals/SignalDelegate::Invoke(Supyrb.ASignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9 (SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* __this, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* ___signal0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___signal0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Supyrb.Signals/SignalDelegate::BeginInvoke(Supyrb.ASignal,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SignalDelegate_BeginInvoke_m1A1CD9D3D9B4DECDB86802A5C2ED65A10CEFF034 (SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* __this, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* ___signal0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___signal0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Supyrb.Signals/SignalDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalDelegate_EndInvoke_mDC6696679D05D38981C0A324C6F2730B5C9962CC (SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Supyrb.ABaseSignal Supyrb.SignalHub::Get(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* SignalHub_Get_mDA6F963B4E0F6CA9E5CB40A6EAAFEACFCAD99CF6 (SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1* __this, Type_t* ___signalType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m6DC05B4F33F3F76627DAE2B09D0FA69BA62F184C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* V_0 = NULL;
	{
		// if (signals.TryGetValue(signalType, out signal))
		Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F* L_0 = __this->___signals_0;
		Type_t* L_1 = ___signalType0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m6DC05B4F33F3F76627DAE2B09D0FA69BA62F184C(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m6DC05B4F33F3F76627DAE2B09D0FA69BA62F184C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return signal;
		ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		// return Bind(signalType);
		Type_t* L_4 = ___signalType0;
		ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* L_5;
		L_5 = SignalHub_Bind_m7C782888A9C946058DD2DD00111815F125AFC883(__this, L_4, NULL);
		return L_5;
	}
}
// System.Int32 Supyrb.SignalHub::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignalHub_get_Count_mDA271F2DECA34C6E8352230868F6462DD0150A15 (SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m929229744C1F892D8C472A053E7AAD24F526FFC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return signals.Count; }
		Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F* L_0 = __this->___signals_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m929229744C1F892D8C472A053E7AAD24F526FFC0(L_0, Dictionary_2_get_Count_m929229744C1F892D8C472A053E7AAD24F526FFC0_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Supyrb.SignalHub::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalHub_Clear_mCC4C88A5780F8D2DB277EA083A42E89F6A777243 (SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mA3437C09E5F5AEC863C1C84C8DB6C2F5A3E11F77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// signals.Clear();
		Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F* L_0 = __this->___signals_0;
		NullCheck(L_0);
		Dictionary_2_Clear_mA3437C09E5F5AEC863C1C84C8DB6C2F5A3E11F77(L_0, Dictionary_2_Clear_mA3437C09E5F5AEC863C1C84C8DB6C2F5A3E11F77_RuntimeMethod_var);
		// }
		return;
	}
}
// Supyrb.ABaseSignal Supyrb.SignalHub::Bind(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* SignalHub_Bind_m7C782888A9C946058DD2DD00111815F125AFC883 (SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1* __this, Type_t* ___signalType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m29579B7F049B5697DE6CA2855A2FC0B0D26D1E9E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* V_0 = NULL;
	{
		// ABaseSignal signal = (ABaseSignal) Activator.CreateInstance(signalType);
		Type_t* L_0 = ___signalType0;
		RuntimeObject* L_1;
		L_1 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_0, NULL);
		V_0 = ((ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9*)CastclassClass((RuntimeObject*)L_1, ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9_il2cpp_TypeInfo_var));
		// signals.Add(signalType, signal);
		Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F* L_2 = __this->___signals_0;
		Type_t* L_3 = ___signalType0;
		ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* L_4 = V_0;
		NullCheck(L_2);
		Dictionary_2_Add_m29579B7F049B5697DE6CA2855A2FC0B0D26D1E9E(L_2, L_3, L_4, Dictionary_2_Add_m29579B7F049B5697DE6CA2855A2FC0B0D26D1E9E_RuntimeMethod_var);
		// return signal;
		ABaseSignal_t6F79ABFCAEFCBE2C2569696EBA1467FE77B0D0D9* L_5 = V_0;
		return L_5;
	}
}
// System.Void Supyrb.SignalHub::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalHub__ctor_mD4F6341FBC3EB37DFC8F98A551390798ADD57F48 (SignalHub_t370970D89A92310004BF510E01BAE95CD52C10D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB743D6F7E5236635D754E2E80788DDD2D42B011A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<Type, ABaseSignal> signals = new Dictionary<Type, ABaseSignal>();
		Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F* L_0 = (Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F*)il2cpp_codegen_object_new(Dictionary_2_tA93B29AE957E9F7B4B092D9DF9A084FF7836AB1F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB743D6F7E5236635D754E2E80788DDD2D42B011A(L_0, Dictionary_2__ctor_mB743D6F7E5236635D754E2E80788DDD2D42B011A_RuntimeMethod_var);
		__this->___signals_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signals_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignalDelegate_Invoke_mE7745DB8DC801DBF66D63E93457C064F2934D1D9_inline (SignalDelegate_tCE8926E002E367497FC8293FAA76154E90DA0827* __this, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC* ___signal0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ASignal_tC69E5C04F0BD3F388DA8D353F9D93AAB43807BFC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___signal0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
