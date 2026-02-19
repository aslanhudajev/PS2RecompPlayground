#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: position_audioslider
// Address: 0x20ca58 - 0x20cc1c
void position_audioslider_0x20ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20ca58u;

    // 0x20ca58: 0x27bdff90
    ctx->pc = 0x20ca58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20ca5c: 0xffbf0060
    ctx->pc = 0x20ca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20ca60: 0xffb50050
    ctx->pc = 0x20ca60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x20ca64: 0xffb40040
    ctx->pc = 0x20ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20ca68: 0xffb30030
    ctx->pc = 0x20ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20ca6c: 0xffb20020
    ctx->pc = 0x20ca6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20ca70: 0xffb10010
    ctx->pc = 0x20ca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20ca74: 0xffb00000
    ctx->pc = 0x20ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ca78: 0x80802d
    ctx->pc = 0x20ca78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca7c: 0xa0882d
    ctx->pc = 0x20ca7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca80: 0xc0902d
    ctx->pc = 0x20ca80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca84: 0xe0982d
    ctx->pc = 0x20ca84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca88: 0x120a02d
    ctx->pc = 0x20ca88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca8c: 0x8e020000
    ctx->pc = 0x20ca8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20ca90: 0x262a818
    ctx->pc = 0x20ca90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20ca94: 0x240200ff
    ctx->pc = 0x20ca94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x20ca98: 0x2a2001a
    ctx->pc = 0x20ca98u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x20ca9c: 0x2012
    ctx->pc = 0x20ca9cu;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x20caa0: 0x182d
    ctx->pc = 0x20caa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20caa4: 0x50430001
    ctx->pc = 0x20CAA4u;
    {
        const bool branch_taken_0x20caa4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x20caa4) {
            ctx->pc = 0x20CAA8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x20CAACu;
            goto label_20caac;
        }
    }
    ctx->pc = 0x20CAACu;
label_20caac:
    // 0x20caac: 0x24020001
    ctx->pc = 0x20caacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cab0: 0x64182a
    ctx->pc = 0x20cab0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x20cab4: 0x40a82d
    ctx->pc = 0x20cab4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cab8: 0x83a80b
    ctx->pc = 0x20cab8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 4));
    // 0x20cabc: 0x8e040004
    ctx->pc = 0x20cabcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20cac0: 0xc0b0ce8
    ctx->pc = 0x20CAC0u;
    SET_GPR_U32(ctx, 31, 0x20CAC8u);
    ctx->pc = 0x20CAC4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CAC8u; }
    }
    if (ctx->pc != 0x20CAC8u) { return; }
    ctx->pc = 0x20CAC8u;
    // 0x20cac8: 0x8e040014
    ctx->pc = 0x20cac8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20cacc: 0xc0b0ce8
    ctx->pc = 0x20CACCu;
    SET_GPR_U32(ctx, 31, 0x20CAD4u);
    ctx->pc = 0x20CAD0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CAD4u; }
    }
    if (ctx->pc != 0x20CAD4u) { return; }
    ctx->pc = 0x20CAD4u;
    // 0x20cad4: 0x8e040008
    ctx->pc = 0x20cad4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20cad8: 0xc0b0ce8
    ctx->pc = 0x20CAD8u;
    SET_GPR_U32(ctx, 31, 0x20CAE0u);
    ctx->pc = 0x20CADCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CAE0u; }
    }
    if (ctx->pc != 0x20CAE0u) { return; }
    ctx->pc = 0x20CAE0u;
    // 0x20cae0: 0x8e04000c
    ctx->pc = 0x20cae0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20cae4: 0xc0b0ce8
    ctx->pc = 0x20CAE4u;
    SET_GPR_U32(ctx, 31, 0x20CAECu);
    ctx->pc = 0x20CAE8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CAECu; }
    }
    if (ctx->pc != 0x20CAECu) { return; }
    ctx->pc = 0x20CAECu;
    // 0x20caec: 0x8e040010
    ctx->pc = 0x20caecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20caf0: 0xc0b0ce8
    ctx->pc = 0x20CAF0u;
    SET_GPR_U32(ctx, 31, 0x20CAF8u);
    ctx->pc = 0x20CAF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CAF8u; }
    }
    if (ctx->pc != 0x20CAF8u) { return; }
    ctx->pc = 0x20CAF8u;
    // 0x20caf8: 0x3c020032
    ctx->pc = 0x20caf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20cafc: 0x8c45f31c
    ctx->pc = 0x20cafcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294963996)));
    // 0x20cb00: 0x8e040004
    ctx->pc = 0x20cb00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20cb04: 0x2252821
    ctx->pc = 0x20cb04u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x20cb08: 0x3c01bf80
    ctx->pc = 0x20cb08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x20cb0c: 0x44816000
    ctx->pc = 0x20cb0cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x20cb10: 0xc0b0df2
    ctx->pc = 0x20CB10u;
    SET_GPR_U32(ctx, 31, 0x20CB18u);
    ctx->pc = 0x20CB14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB18u; }
    }
    if (ctx->pc != 0x20CB18u) { return; }
    ctx->pc = 0x20CB18u;
    // 0x20cb18: 0x2331821
    ctx->pc = 0x20cb18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x20cb1c: 0x3c020032
    ctx->pc = 0x20cb1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20cb20: 0x8c45f320
    ctx->pc = 0x20cb20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294964000)));
    // 0x20cb24: 0x8e040014
    ctx->pc = 0x20cb24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20cb28: 0x652821
    ctx->pc = 0x20cb28u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20cb2c: 0x3c01bf80
    ctx->pc = 0x20cb2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x20cb30: 0x44816000
    ctx->pc = 0x20cb30u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x20cb34: 0xc0b0df2
    ctx->pc = 0x20CB34u;
    SET_GPR_U32(ctx, 31, 0x20CB3Cu);
    ctx->pc = 0x20CB38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB3Cu; }
    }
    if (ctx->pc != 0x20CB3Cu) { return; }
    ctx->pc = 0x20CB3Cu;
    // 0x20cb3c: 0x8e040008
    ctx->pc = 0x20cb3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20cb40: 0x220282d
    ctx->pc = 0x20cb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb44: 0x3c01bf80
    ctx->pc = 0x20cb44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x20cb48: 0x44816000
    ctx->pc = 0x20cb48u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x20cb4c: 0xc0b0df2
    ctx->pc = 0x20CB4Cu;
    SET_GPR_U32(ctx, 31, 0x20CB54u);
    ctx->pc = 0x20CB50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 11));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB54u; }
    }
    if (ctx->pc != 0x20CB54u) { return; }
    ctx->pc = 0x20CB54u;
    // 0x20cb54: 0x8e040008
    ctx->pc = 0x20cb54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20cb58: 0x260282d
    ctx->pc = 0x20cb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb5c: 0xc0b0cf6
    ctx->pc = 0x20CB5Cu;
    SET_GPR_U32(ctx, 31, 0x20CB64u);
    ctx->pc = 0x20CB60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB64u; }
    }
    if (ctx->pc != 0x20CB64u) { return; }
    ctx->pc = 0x20CB64u;
    // 0x20cb64: 0x8e04000c
    ctx->pc = 0x20cb64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20cb68: 0x220282d
    ctx->pc = 0x20cb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb6c: 0x3c01bf80
    ctx->pc = 0x20cb6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x20cb70: 0x44816000
    ctx->pc = 0x20cb70u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x20cb74: 0xc0b0df2
    ctx->pc = 0x20CB74u;
    SET_GPR_U32(ctx, 31, 0x20CB7Cu);
    ctx->pc = 0x20CB78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 15));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB7Cu; }
    }
    if (ctx->pc != 0x20CB7Cu) { return; }
    ctx->pc = 0x20CB7Cu;
    // 0x20cb7c: 0x8e04000c
    ctx->pc = 0x20cb7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20cb80: 0x2a0282d
    ctx->pc = 0x20cb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb84: 0xc0b0cf6
    ctx->pc = 0x20CB84u;
    SET_GPR_U32(ctx, 31, 0x20CB8Cu);
    ctx->pc = 0x20CB88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB8Cu; }
    }
    if (ctx->pc != 0x20CB8Cu) { return; }
    ctx->pc = 0x20CB8Cu;
    // 0x20cb8c: 0x2358821
    ctx->pc = 0x20cb8cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x20cb90: 0x8e040010
    ctx->pc = 0x20cb90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20cb94: 0x2625ffec
    ctx->pc = 0x20cb94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294967276));
    // 0x20cb98: 0x3c01bf80
    ctx->pc = 0x20cb98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x20cb9c: 0x44816000
    ctx->pc = 0x20cb9cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x20cba0: 0xc0b0df2
    ctx->pc = 0x20CBA0u;
    SET_GPR_U32(ctx, 31, 0x20CBA8u);
    ctx->pc = 0x20CBA4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 2));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CBA8u; }
    }
    if (ctx->pc != 0x20CBA8u) { return; }
    ctx->pc = 0x20CBA8u;
    // 0x20cba8: 0x24110064
    ctx->pc = 0x20cba8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 100));
    // 0x20cbac: 0x2918818
    ctx->pc = 0x20cbacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20cbb0: 0x8e040004
    ctx->pc = 0x20cbb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20cbb4: 0xc0b0f52
    ctx->pc = 0x20CBB4u;
    SET_GPR_U32(ctx, 31, 0x20CBBCu);
    ctx->pc = 0x20CBB8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CBBCu; }
    }
    if (ctx->pc != 0x20CBBCu) { return; }
    ctx->pc = 0x20CBBCu;
    // 0x20cbbc: 0x8e040014
    ctx->pc = 0x20cbbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20cbc0: 0xc0b0f52
    ctx->pc = 0x20CBC0u;
    SET_GPR_U32(ctx, 31, 0x20CBC8u);
    ctx->pc = 0x20CBC4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CBC8u; }
    }
    if (ctx->pc != 0x20CBC8u) { return; }
    ctx->pc = 0x20CBC8u;
    // 0x20cbc8: 0x24050096
    ctx->pc = 0x20cbc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 150));
    // 0x20cbcc: 0x2850018
    ctx->pc = 0x20cbccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20cbd0: 0x2812
    ctx->pc = 0x20cbd0u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x20cbd4: 0xc0b0f52
    ctx->pc = 0x20CBD4u;
    SET_GPR_U32(ctx, 31, 0x20CBDCu);
    ctx->pc = 0x20CBD8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CBDCu; }
    }
    if (ctx->pc != 0x20CBDCu) { return; }
    ctx->pc = 0x20CBDCu;
    // 0x20cbdc: 0x240500a0
    ctx->pc = 0x20cbdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 160));
    // 0x20cbe0: 0x2850018
    ctx->pc = 0x20cbe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20cbe4: 0x2812
    ctx->pc = 0x20cbe4u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x20cbe8: 0xc0b0f52
    ctx->pc = 0x20CBE8u;
    SET_GPR_U32(ctx, 31, 0x20CBF0u);
    ctx->pc = 0x20CBECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CBF0u; }
    }
    if (ctx->pc != 0x20CBF0u) { return; }
    ctx->pc = 0x20CBF0u;
    // 0x20cbf0: 0x8e040010
    ctx->pc = 0x20cbf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20cbf4: 0x220282d
    ctx->pc = 0x20cbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cbf8: 0xdfbf0060
    ctx->pc = 0x20cbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20cbfc: 0xdfb50050
    ctx->pc = 0x20cbfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20cc00: 0xdfb40040
    ctx->pc = 0x20cc00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20cc04: 0xdfb30030
    ctx->pc = 0x20cc04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20cc08: 0xdfb20020
    ctx->pc = 0x20cc08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20cc0c: 0xdfb10010
    ctx->pc = 0x20cc0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cc10: 0xdfb00000
    ctx->pc = 0x20cc10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cc14: 0x80b0f52
    ctx->pc = 0x20CC14u;
    ctx->pc = 0x20CC18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x2C3D48u;
    MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime); return;
    ctx->pc = 0x20CC1Cu;
}
