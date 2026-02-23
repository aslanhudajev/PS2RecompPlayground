#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_AdjustSync
// Address: 0x18ff70 - 0x1901b4
void sfadxt_AdjustSync_0x18ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_AdjustSync");


    ctx->pc = 0x18ff70u;

    // 0x18ff70: 0x27bdff40
    ctx->pc = 0x18ff70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x18ff74: 0xffbe00a0
    ctx->pc = 0x18ff74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x18ff78: 0xffb70090
    ctx->pc = 0x18ff78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x18ff7c: 0xe0f02d
    ctx->pc = 0x18ff7cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff80: 0xffb50070
    ctx->pc = 0x18ff80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x18ff84: 0xa0b82d
    ctx->pc = 0x18ff84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff88: 0xffb40060
    ctx->pc = 0x18ff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x18ff8c: 0xc0a82d
    ctx->pc = 0x18ff8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff90: 0xffb30050
    ctx->pc = 0x18ff90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x18ff94: 0x80a02d
    ctx->pc = 0x18ff94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff98: 0xffb10030
    ctx->pc = 0x18ff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x18ff9c: 0x26933e20
    ctx->pc = 0x18ff9cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 20), 15904));
    // 0x18ffa0: 0xffbf00b0
    ctx->pc = 0x18ffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x18ffa4: 0x26910a94
    ctx->pc = 0x18ffa4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 20), 2708));
    // 0x18ffa8: 0xffb60080
    ctx->pc = 0x18ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x18ffac: 0xffb20040
    ctx->pc = 0x18ffacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x18ffb0: 0x3a0282d
    ctx->pc = 0x18ffb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffb4: 0xffb00020
    ctx->pc = 0x18ffb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x18ffb8: 0x37a60004
    ctx->pc = 0x18ffb8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    // 0x18ffbc: 0xc064150
    ctx->pc = 0x18FFBCu;
    SET_GPR_U32(ctx, 31, 0x18FFC4u);
    ctx->pc = 0x18FFC0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x190540u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_GetNchSfreq_0x190540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FFC4u; }
        else if (ctx->pc != 0x18FFC4u) { ctx->pc = 0x18FFC4u; }
    }
    if (ctx->pc != 0x18FFC4u) { return; }
    ctx->pc = 0x18FFC4u;
    // 0x18ffc4: 0x14400010
    ctx->pc = 0x18FFC4u;
    {
        const bool branch_taken_0x18ffc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18FFC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)25 << 16));
        if (branch_taken_0x18ffc4) {
            ctx->pc = 0x190008u;
            goto label_190008;
        }
    }
    ctx->pc = 0x18FFCCu;
    // 0x18ffcc: 0x8fa50004
    ctx->pc = 0x18ffccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18ffd0: 0xc067734
    ctx->pc = 0x18FFD0u;
    SET_GPR_U32(ctx, 31, 0x18FFD8u);
    ctx->pc = 0x18FFD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19DCD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetAudioStartSample_0x19dcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FFD8u; }
        else if (ctx->pc != 0x18FFD8u) { ctx->pc = 0x18FFD8u; }
    }
    if (ctx->pc != 0x18FFD8u) { return; }
    ctx->pc = 0x18FFD8u;
    // 0x18ffd8: 0x40902d
    ctx->pc = 0x18ffd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffdc: 0x6400069
    ctx->pc = 0x18FFDCu;
    {
        const bool branch_taken_0x18ffdc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x18FFE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18ffdc) {
            ctx->pc = 0x190184u;
            goto label_190184;
        }
    }
    ctx->pc = 0x18FFE4u;
    // 0x18ffe4: 0xc0674c2
    ctx->pc = 0x18FFE4u;
    SET_GPR_U32(ctx, 31, 0x18FFECu);
    ctx->pc = 0x18FFE8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FFECu; }
        else if (ctx->pc != 0x18FFECu) { ctx->pc = 0x18FFECu; }
    }
    if (ctx->pc != 0x18FFECu) { return; }
    ctx->pc = 0x18FFECu;
    // 0x18ffec: 0x14400009
    ctx->pc = 0x18FFECu;
    {
        const bool branch_taken_0x18ffec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18FFF0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x18ffec) {
            ctx->pc = 0x190014u;
            goto label_190014;
        }
    }
    ctx->pc = 0x18FFF4u;
    // 0x18fff4: 0x8fa60004
    ctx->pc = 0x18fff4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18fff8: 0x220202d
    ctx->pc = 0x18fff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fffc: 0xc067764
    ctx->pc = 0x18FFFCu;
    SET_GPR_U32(ctx, 31, 0x190004u);
    ctx->pc = 0x190000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19DD90u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_SetStartTime_0x19dd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190004u; }
        else if (ctx->pc != 0x190004u) { ctx->pc = 0x190004u; }
    }
    if (ctx->pc != 0x190004u) { return; }
    ctx->pc = 0x190004u;
    // 0x190004: 0x3c020019
    ctx->pc = 0x190004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)25 << 16));
label_190008:
    // 0x190008: 0x2442feb8
    ctx->pc = 0x190008u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966968));
    // 0x19000c: 0x1000005d
    ctx->pc = 0x19000Cu;
    {
        const bool branch_taken_0x19000c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x190010u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        if (branch_taken_0x19000c) {
            ctx->pc = 0x190184u;
            goto label_190184;
        }
    }
    ctx->pc = 0x190014u;
label_190014:
    // 0x190014: 0x220202d
    ctx->pc = 0x190014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190018: 0xc067748
    ctx->pc = 0x190018u;
    SET_GPR_U32(ctx, 31, 0x190020u);
    ctx->pc = 0x19001Cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x19DD20u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetVideoStartSample_0x19dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190020u; }
        else if (ctx->pc != 0x190020u) { ctx->pc = 0x190020u; }
    }
    if (ctx->pc != 0x190020u) { return; }
    ctx->pc = 0x190020u;
    // 0x190020: 0x40802d
    ctx->pc = 0x190020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190024: 0x6000057
    ctx->pc = 0x190024u;
    {
        const bool branch_taken_0x190024 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x190028u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x190024) {
            ctx->pc = 0x190184u;
            goto label_190184;
        }
    }
    ctx->pc = 0x19002Cu;
    // 0x19002c: 0x8fa60004
    ctx->pc = 0x19002cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x190030: 0x200282d
    ctx->pc = 0x190030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190034: 0xc067764
    ctx->pc = 0x190034u;
    SET_GPR_U32(ctx, 31, 0x19003Cu);
    ctx->pc = 0x190038u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19DD90u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_SetStartTime_0x19dd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19003Cu; }
        else if (ctx->pc != 0x19003Cu) { ctx->pc = 0x19003Cu; }
    }
    if (ctx->pc != 0x19003Cu) { return; }
    ctx->pc = 0x19003Cu;
    // 0x19003c: 0x8e630038
    ctx->pc = 0x19003cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x190040: 0x2121023
    ctx->pc = 0x190040u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x190044: 0x432823
    ctx->pc = 0x190044u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190048: 0x4a00037
    ctx->pc = 0x190048u;
    {
        const bool branch_taken_0x190048 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x19004Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x190048) {
            ctx->pc = 0x190128u;
            goto label_190128;
        }
    }
    ctx->pc = 0x190050u;
    // 0x190050: 0x24a2001f
    ctx->pc = 0x190050u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 31));
    // 0x190054: 0x65182a
    ctx->pc = 0x190054u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x190058: 0x8fa70000
    ctx->pc = 0x190058u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19005c: 0xa3100b
    ctx->pc = 0x19005cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x190060: 0x24110012
    ctx->pc = 0x190060u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 18));
    // 0x190064: 0x21143
    ctx->pc = 0x190064u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x190068: 0x471018
    ctx->pc = 0x190068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x19006c: 0x70518018
    ctx->pc = 0x19006cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x190070: 0x1a00001b
    ctx->pc = 0x190070u;
    {
        const bool branch_taken_0x190070 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x190074u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x190070) {
            ctx->pc = 0x1900E0u;
            goto label_1900e0;
        }
    }
    ctx->pc = 0x190078u;
    // 0x190078: 0xf11818
    ctx->pc = 0x190078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19007c: 0x2e0202d
    ctx->pc = 0x19007cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190080: 0x37a6000c
    ctx->pc = 0x190080u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 12));
    // 0x190084: 0x2a3001a
    ctx->pc = 0x190084u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x190088: 0x50600001
    ctx->pc = 0x190088u;
    {
        const bool branch_taken_0x190088 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x190088) {
            ctx->pc = 0x19008Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x190090u;
            goto label_190090;
        }
    }
    ctx->pc = 0x190090u;
label_190090:
    // 0x190090: 0x1012
    ctx->pc = 0x190090u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x190094: 0x471018
    ctx->pc = 0x190094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x190098: 0x70511018
    ctx->pc = 0x190098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x19009c: 0x50182a
    ctx->pc = 0x19009cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x1900a0: 0x203100a
    ctx->pc = 0x1900a0u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 16));
    // 0x1900a4: 0x40282d
    ctx->pc = 0x1900a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900a8: 0xc06406e
    ctx->pc = 0x1900A8u;
    SET_GPR_U32(ctx, 31, 0x1900B0u);
    ctx->pc = 0x1900ACu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1901B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_AdjDiscard_0x1901b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1900B0u; }
        else if (ctx->pc != 0x1900B0u) { ctx->pc = 0x1900B0u; }
    }
    if (ctx->pc != 0x1900B0u) { return; }
    ctx->pc = 0x1900B0u;
    // 0x1900b0: 0x8fa30000
    ctx->pc = 0x1900b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1900b4: 0x40b02d
    ctx->pc = 0x1900b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900b8: 0x711818
    ctx->pc = 0x1900b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1900bc: 0x72c3001a
    ctx->pc = 0x1900bcu;
    { int32_t divisor = GPR_S32(ctx, 3); if (divisor != 0) { ctx->lo1 = (uint32_t)(GPR_S32(ctx, 22) / divisor); ctx->hi1 = (uint32_t)(GPR_S32(ctx, 3) % divisor); } else { ctx->lo1= (GPR_S32(ctx,22) < 0) ? 1 : -1; ctx->hi1=GPR_S32(ctx,3); } }
    // 0x1900c0: 0x50600001
    ctx->pc = 0x1900C0u;
    {
        const bool branch_taken_0x1900c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1900c0) {
            ctx->pc = 0x1900C4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1900C8u;
            goto label_1900c8;
        }
    }
    ctx->pc = 0x1900C8u;
label_1900c8:
    // 0x1900c8: 0x8e620038
    ctx->pc = 0x1900c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1900cc: 0x70002012
    ctx->pc = 0x1900ccu;
    SET_GPR_U32(ctx, 4, ctx->lo1);
    // 0x1900d0: 0x42140
    ctx->pc = 0x1900d0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1900d4: 0x441021
    ctx->pc = 0x1900d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1900d8: 0x1e00000b
    ctx->pc = 0x1900D8u;
    {
        const bool branch_taken_0x1900d8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1900DCu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x1900d8) {
            ctx->pc = 0x190108u;
            goto label_190108;
        }
    }
    ctx->pc = 0x1900E0u;
label_1900e0:
    // 0x1900e0: 0x8fa20008
    ctx->pc = 0x1900e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1900e4: 0x10400008
    ctx->pc = 0x1900E4u;
    {
        const bool branch_taken_0x1900e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1900E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)25 << 16));
        if (branch_taken_0x1900e4) {
            ctx->pc = 0x190108u;
            goto label_190108;
        }
    }
    ctx->pc = 0x1900ECu;
    // 0x1900ec: 0x2e0202d
    ctx->pc = 0x1900ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900f0: 0x2442feb8
    ctx->pc = 0x1900f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966968));
    // 0x1900f4: 0x2a0282d
    ctx->pc = 0x1900f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900f8: 0xae62003c
    ctx->pc = 0x1900f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x1900fc: 0xc05ca7e
    ctx->pc = 0x1900FCu;
    SET_GPR_U32(ctx, 31, 0x190104u);
    ctx->pc = 0x190100u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1729F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_IsEndcode_0x1729f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190104u; }
        else if (ctx->pc != 0x190104u) { ctx->pc = 0x190104u; }
    }
    if (ctx->pc != 0x190104u) { return; }
    ctx->pc = 0x190104u;
    // 0x190104: 0xafa2000c
    ctx->pc = 0x190104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_190108:
    // 0x190108: 0x8fa2000c
    ctx->pc = 0x190108u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x19010c: 0x1040001c
    ctx->pc = 0x19010Cu;
    {
        const bool branch_taken_0x19010c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x190110u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19010c) {
            ctx->pc = 0x190180u;
            goto label_190180;
        }
    }
    ctx->pc = 0x190114u;
    // 0x190114: 0x24050006
    ctx->pc = 0x190114u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x190118: 0xc067464
    ctx->pc = 0x190118u;
    SET_GPR_U32(ctx, 31, 0x190120u);
    ctx->pc = 0x19011Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190120u; }
        else if (ctx->pc != 0x190120u) { ctx->pc = 0x190120u; }
    }
    if (ctx->pc != 0x190120u) { return; }
    ctx->pc = 0x190120u;
    // 0x190120: 0x10000018
    ctx->pc = 0x190120u;
    {
        const bool branch_taken_0x190120 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x190124u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
        if (branch_taken_0x190120) {
            ctx->pc = 0x190184u;
            goto label_190184;
        }
    }
    ctx->pc = 0x190128u;
label_190128:
    // 0x190128: 0x8fa20008
    ctx->pc = 0x190128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19012c: 0x10400014
    ctx->pc = 0x19012Cu;
    {
        const bool branch_taken_0x19012c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x190130u;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        if (branch_taken_0x19012c) {
            ctx->pc = 0x190180u;
            goto label_190180;
        }
    }
    ctx->pc = 0x190134u;
    // 0x190134: 0x2403ffff
    ctx->pc = 0x190134u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x190138: 0x65182a
    ctx->pc = 0x190138u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x19013c: 0x24a2001f
    ctx->pc = 0x19013cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 31));
    // 0x190140: 0xa3100b
    ctx->pc = 0x190140u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x190144: 0x21143
    ctx->pc = 0x190144u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x190148: 0x28140
    ctx->pc = 0x190148u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 5));
    // 0x19014c: 0x1a000009
    ctx->pc = 0x19014Cu;
    {
        const bool branch_taken_0x19014c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x190150u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x19014c) {
            ctx->pc = 0x190174u;
            goto label_190174;
        }
    }
    ctx->pc = 0x190154u;
    // 0x190154: 0x280202d
    ctx->pc = 0x190154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190158: 0xc064090
    ctx->pc = 0x190158u;
    SET_GPR_U32(ctx, 31, 0x190160u);
    ctx->pc = 0x19015Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_InsertSilence_0x190240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190160u; }
        else if (ctx->pc != 0x190160u) { ctx->pc = 0x190160u; }
    }
    if (ctx->pc != 0x190160u) { return; }
    ctx->pc = 0x190160u;
    // 0x190160: 0x8e630038
    ctx->pc = 0x190160u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x190164: 0x2022823
    ctx->pc = 0x190164u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x190168: 0x621823
    ctx->pc = 0x190168u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19016c: 0x1ca00004
    ctx->pc = 0x19016Cu;
    {
        const bool branch_taken_0x19016c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x190170u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        if (branch_taken_0x19016c) {
            ctx->pc = 0x190180u;
            goto label_190180;
        }
    }
    ctx->pc = 0x190174u;
label_190174:
    // 0x190174: 0x3c020019
    ctx->pc = 0x190174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)25 << 16));
    // 0x190178: 0x2442feb8
    ctx->pc = 0x190178u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966968));
    // 0x19017c: 0xae62003c
    ctx->pc = 0x19017cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
label_190180:
    // 0x190180: 0xafd60000
    ctx->pc = 0x190180u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
label_190184:
    // 0x190184: 0xdfbf00b0
    ctx->pc = 0x190184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x190188: 0xdfbe00a0
    ctx->pc = 0x190188u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19018c: 0xdfb70090
    ctx->pc = 0x19018cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x190190: 0xdfb60080
    ctx->pc = 0x190190u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x190194: 0xdfb50070
    ctx->pc = 0x190194u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x190198: 0xdfb40060
    ctx->pc = 0x190198u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19019c: 0xdfb30050
    ctx->pc = 0x19019cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1901a0: 0xdfb20040
    ctx->pc = 0x1901a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1901a4: 0xdfb10030
    ctx->pc = 0x1901a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1901a8: 0xdfb00020
    ctx->pc = 0x1901a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1901ac: 0x3e00008
    ctx->pc = 0x1901ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1901B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190008u: goto label_190008;
            case 0x190014u: goto label_190014;
            case 0x190090u: goto label_190090;
            case 0x1900C8u: goto label_1900c8;
            case 0x1900E0u: goto label_1900e0;
            case 0x190108u: goto label_190108;
            case 0x190128u: goto label_190128;
            case 0x190174u: goto label_190174;
            case 0x190180u: goto label_190180;
            case 0x190184u: goto label_190184;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1901B4u;
}
