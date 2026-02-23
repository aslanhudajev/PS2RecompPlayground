#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxf_read_sj32
// Address: 0x16b940 - 0x16ba38
void adxf_read_sj32_0x16b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxf_read_sj32");


    ctx->pc = 0x16b940u;

    // 0x16b940: 0x27bdffc0
    ctx->pc = 0x16b940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b944: 0xffb20020
    ctx->pc = 0x16b944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16b948: 0xffb10010
    ctx->pc = 0x16b948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16b94c: 0xc0902d
    ctx->pc = 0x16b94cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b950: 0xffb00000
    ctx->pc = 0x16b950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b954: 0xa0882d
    ctx->pc = 0x16b954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b958: 0xffbf0030
    ctx->pc = 0x16b958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16b95c: 0x80802d
    ctx->pc = 0x16b95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b960: 0xc05c2e0
    ctx->pc = 0x16B960u;
    SET_GPR_U32(ctx, 31, 0x16B968u);
    ctx->pc = 0x16B964u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x170B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_GetStat_0x170b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B968u; }
        else if (ctx->pc != 0x16B968u) { ctx->pc = 0x16B968u; }
    }
    if (ctx->pc != 0x16B968u) { return; }
    ctx->pc = 0x16B968u;
    // 0x16b968: 0x24030001
    ctx->pc = 0x16b968u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b96c: 0x10430003
    ctx->pc = 0x16B96Cu;
    {
        const bool branch_taken_0x16b96c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x16b96c) {
            ctx->pc = 0x16B97Cu;
            goto label_16b97c;
        }
    }
    ctx->pc = 0x16B974u;
    // 0x16b974: 0xc05c31c
    ctx->pc = 0x16B974u;
    SET_GPR_U32(ctx, 31, 0x16B97Cu);
    ctx->pc = 0x16B978u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x170C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Stop_0x170c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B97Cu; }
        else if (ctx->pc != 0x16B97Cu) { ctx->pc = 0x16B97Cu; }
    }
    if (ctx->pc != 0x16B97Cu) { return; }
    ctx->pc = 0x16B97Cu;
label_16b97c:
    // 0x16b97c: 0xc05a4e4
    ctx->pc = 0x16B97Cu;
    SET_GPR_U32(ctx, 31, 0x16B984u);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B984u; }
        else if (ctx->pc != 0x16B984u) { ctx->pc = 0x16B984u; }
    }
    if (ctx->pc != 0x16B984u) { return; }
    ctx->pc = 0x16B984u;
    // 0x16b984: 0x8e040014
    ctx->pc = 0x16b984u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16b988: 0x8e03000c
    ctx->pc = 0x16b988u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16b98c: 0x8e020030
    ctx->pc = 0x16b98cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x16b990: 0x642823
    ctx->pc = 0x16b990u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b994: 0xae000020
    ctx->pc = 0x16b994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x16b998: 0x225182a
    ctx->pc = 0x16b998u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 5)));
    // 0x16b99c: 0x441021
    ctx->pc = 0x16b99cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16b9a0: 0x223280b
    ctx->pc = 0x16b9a0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 17));
    // 0x16b9a4: 0xae020018
    ctx->pc = 0x16b9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x16b9a8: 0x14a00005
    ctx->pc = 0x16B9A8u;
    {
        const bool branch_taken_0x16b9a8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B9ACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
        if (branch_taken_0x16b9a8) {
            ctx->pc = 0x16B9C0u;
            goto label_16b9c0;
        }
    }
    ctx->pc = 0x16B9B0u;
    // 0x16b9b0: 0x24020003
    ctx->pc = 0x16b9b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b9b4: 0x882d
    ctx->pc = 0x16b9b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9b8: 0x10000016
    ctx->pc = 0x16B9B8u;
    {
        const bool branch_taken_0x16b9b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B9BCu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x16b9b8) {
            ctx->pc = 0x16BA14u;
            goto label_16ba14;
        }
    }
    ctx->pc = 0x16B9C0u;
label_16b9c0:
    // 0x16b9c0: 0xc05c482
    ctx->pc = 0x16B9C0u;
    SET_GPR_U32(ctx, 31, 0x16B9C8u);
    ctx->pc = 0x16B9C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x171208u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_SetRdSct_0x171208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9C8u; }
        else if (ctx->pc != 0x16B9C8u) { ctx->pc = 0x16B9C8u; }
    }
    if (ctx->pc != 0x16B9C8u) { return; }
    ctx->pc = 0x16B9C8u;
    // 0x16b9c8: 0x8e040004
    ctx->pc = 0x16b9c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16b9cc: 0xc05c338
    ctx->pc = 0x16B9CCu;
    SET_GPR_U32(ctx, 31, 0x16B9D4u);
    ctx->pc = 0x16B9D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x170CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_SetEos_0x170ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9D4u; }
        else if (ctx->pc != 0x16B9D4u) { ctx->pc = 0x16B9D4u; }
    }
    if (ctx->pc != 0x16B9D4u) { return; }
    ctx->pc = 0x16B9D4u;
    // 0x16b9d4: 0x8e040004
    ctx->pc = 0x16b9d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16b9d8: 0xc05c472
    ctx->pc = 0x16B9D8u;
    SET_GPR_U32(ctx, 31, 0x16B9E0u);
    ctx->pc = 0x16B9DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1711C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_SetSj_0x1711c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9E0u; }
        else if (ctx->pc != 0x16B9E0u) { ctx->pc = 0x16B9E0u; }
    }
    if (ctx->pc != 0x16B9E0u) { return; }
    ctx->pc = 0x16B9E0u;
    // 0x16b9e0: 0x8e020030
    ctx->pc = 0x16b9e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x16b9e4: 0x8e050014
    ctx->pc = 0x16b9e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16b9e8: 0x8e040004
    ctx->pc = 0x16b9e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16b9ec: 0xc05c486
    ctx->pc = 0x16B9ECu;
    SET_GPR_U32(ctx, 31, 0x16B9F4u);
    ctx->pc = 0x16B9F0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x171218u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_SetOfst_0x171218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9F4u; }
        else if (ctx->pc != 0x16B9F4u) { ctx->pc = 0x16B9F4u; }
    }
    if (ctx->pc != 0x16B9F4u) { return; }
    ctx->pc = 0x16B9F4u;
    // 0x16b9f4: 0x8e040004
    ctx->pc = 0x16b9f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16b9f8: 0xc05c43c
    ctx->pc = 0x16B9F8u;
    SET_GPR_U32(ctx, 31, 0x16BA00u);
    ctx->pc = 0x16B9FCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1710F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_SetReqRdSize_0x1710f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA00u; }
        else if (ctx->pc != 0x16BA00u) { ctx->pc = 0x16BA00u; }
    }
    if (ctx->pc != 0x16BA00u) { return; }
    ctx->pc = 0x16BA00u;
    // 0x16ba00: 0x24030002
    ctx->pc = 0x16ba00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ba04: 0x8e040004
    ctx->pc = 0x16ba04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16ba08: 0xc05c304
    ctx->pc = 0x16BA08u;
    SET_GPR_U32(ctx, 31, 0x16BA10u);
    ctx->pc = 0x16BA0Cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x170C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Start_0x170c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA10u; }
        else if (ctx->pc != 0x16BA10u) { ctx->pc = 0x16BA10u; }
    }
    if (ctx->pc != 0x16BA10u) { return; }
    ctx->pc = 0x16BA10u;
    // 0x16ba10: 0x8e11001c
    ctx->pc = 0x16ba10u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_16ba14:
    // 0x16ba14: 0xc05a4f0
    ctx->pc = 0x16BA14u;
    SET_GPR_U32(ctx, 31, 0x16BA1Cu);
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA1Cu; }
        else if (ctx->pc != 0x16BA1Cu) { ctx->pc = 0x16BA1Cu; }
    }
    if (ctx->pc != 0x16BA1Cu) { return; }
    ctx->pc = 0x16BA1Cu;
    // 0x16ba1c: 0x220102d
    ctx->pc = 0x16ba1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba20: 0xdfbf0030
    ctx->pc = 0x16ba20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ba24: 0xdfb20020
    ctx->pc = 0x16ba24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ba28: 0xdfb10010
    ctx->pc = 0x16ba28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ba2c: 0xdfb00000
    ctx->pc = 0x16ba2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ba30: 0x3e00008
    ctx->pc = 0x16BA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BA34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B97Cu: goto label_16b97c;
            case 0x16B9C0u: goto label_16b9c0;
            case 0x16BA14u: goto label_16ba14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BA38u;
}
