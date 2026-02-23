#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initPal__11PalMgrClassFiiPvii
// Address: 0x203fa0 - 0x20411c
void initPal__11PalMgrClassFiiPvii_0x203fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initPal__11PalMgrClassFiiPvii");


    ctx->pc = 0x203fa0u;

    // 0x203fa0: 0x27bdff60
    ctx->pc = 0x203fa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x203fa4: 0x7fbf0090
    ctx->pc = 0x203fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x203fa8: 0x7fbe0080
    ctx->pc = 0x203fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x203fac: 0x7fb70070
    ctx->pc = 0x203facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x203fb0: 0x7fb60060
    ctx->pc = 0x203fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x203fb4: 0x7fb50050
    ctx->pc = 0x203fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x203fb8: 0x7fb40040
    ctx->pc = 0x203fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x203fbc: 0x7fb30030
    ctx->pc = 0x203fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x203fc0: 0x7fb20020
    ctx->pc = 0x203fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x203fc4: 0x3c020027
    ctx->pc = 0x203fc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x203fc8: 0x7fb10010
    ctx->pc = 0x203fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x203fcc: 0x61840
    ctx->pc = 0x203fccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x203fd0: 0x24422660
    ctx->pc = 0x203fd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9824));
    // 0x203fd4: 0x7fb00000
    ctx->pc = 0x203fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203fd8: 0x70a0ae28
    ctx->pc = 0x203fd8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x203fdc: 0x431021
    ctx->pc = 0x203fdcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x203fe0: 0x80450000
    ctx->pc = 0x203fe0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203fe4: 0x70e09e28
    ctx->pc = 0x203fe4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x203fe8: 0x7120be28
    ctx->pc = 0x203fe8u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x203fec: 0x7080b628
    ctx->pc = 0x203fecu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x203ff0: 0x70c0a628
    ctx->pc = 0x203ff0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x203ff4: 0x3c020027
    ctx->pc = 0x203ff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x203ff8: 0x24422661
    ctx->pc = 0x203ff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9825));
    // 0x203ffc: 0x431021
    ctx->pc = 0x203ffcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204000: 0x805e0000
    ctx->pc = 0x204000u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204004: 0x51880
    ctx->pc = 0x204004u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x204008: 0x3c020027
    ctx->pc = 0x204008u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20400c: 0x24422640
    ctx->pc = 0x20400cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9792));
    // 0x204010: 0x431021
    ctx->pc = 0x204010u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204014: 0x8c430000
    ctx->pc = 0x204014u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204018: 0x51040
    ctx->pc = 0x204018u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x20401c: 0x441021
    ctx->pc = 0x20401cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x204020: 0x84510014
    ctx->pc = 0x204020u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x204024: 0x8452001c
    ctx->pc = 0x204024u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x204028: 0x11000008
    ctx->pc = 0x204028u;
    {
        const bool branch_taken_0x204028 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x20402Cu;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 3), 5));
        if (branch_taken_0x204028) {
            ctx->pc = 0x20404Cu;
            goto label_20404c;
        }
    }
    ctx->pc = 0x204030u;
    // 0x204030: 0x32c3c
    ctx->pc = 0x204030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x204034: 0xc080f4c
    ctx->pc = 0x204034u;
    SET_GPR_U32(ctx, 31, 0x20403Cu);
    ctx->pc = 0x204038u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->pc = 0x203D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFreeTmpBuf__11PalMgrClassFs_0x203d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20403Cu; }
        else if (ctx->pc != 0x20403Cu) { ctx->pc = 0x20403Cu; }
    }
    if (ctx->pc != 0x20403Cu) { return; }
    ctx->pc = 0x20403Cu;
    // 0x20403c: 0x28c3c
    ctx->pc = 0x20403cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x204040: 0x118c3f
    ctx->pc = 0x204040u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x204044: 0x1000000b
    ctx->pc = 0x204044u;
    {
        const bool branch_taken_0x204044 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x204048u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x204044) {
            ctx->pc = 0x204074u;
            goto label_204074;
        }
    }
    ctx->pc = 0x20404Cu;
label_20404c:
    // 0x20404c: 0x11143c
    ctx->pc = 0x20404cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x204050: 0x2143f
    ctx->pc = 0x204050u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x204054: 0x4410008
    ctx->pc = 0x204054u;
    {
        const bool branch_taken_0x204054 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x204058u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 256));
        if (branch_taken_0x204054) {
            ctx->pc = 0x204078u;
            goto label_204078;
        }
    }
    ctx->pc = 0x20405Cu;
    // 0x20405c: 0x3c020027
    ctx->pc = 0x20405cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x204060: 0x72802e28
    ctx->pc = 0x204060u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x204064: 0xc05114a
    ctx->pc = 0x204064u;
    SET_GPR_U32(ctx, 31, 0x20406Cu);
    ctx->pc = 0x204068u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 10064));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20406Cu; }
        else if (ctx->pc != 0x20406Cu) { ctx->pc = 0x20406Cu; }
    }
    if (ctx->pc != 0x20406Cu) { return; }
    ctx->pc = 0x20406Cu;
label_20406c:
    // 0x20406c: 0x1000ffff
    ctx->pc = 0x20406Cu;
    {
        const bool branch_taken_0x20406c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20406c) {
            ctx->pc = 0x20406Cu;
            goto label_20406c;
        }
    }
    ctx->pc = 0x204074u;
label_204074:
    // 0x204074: 0x2a010100
    ctx->pc = 0x204074u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 256));
label_204078:
    // 0x204078: 0x10200002
    ctx->pc = 0x204078u;
    {
        const bool branch_taken_0x204078 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20407Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
        if (branch_taken_0x204078) {
            ctx->pc = 0x204084u;
            goto label_204084;
        }
    }
    ctx->pc = 0x204080u;
    // 0x204080: 0x24100100
    ctx->pc = 0x204080u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 256));
label_204084:
    // 0x204084: 0xc080fb8
    ctx->pc = 0x204084u;
    SET_GPR_U32(ctx, 31, 0x20408Cu);
    ctx->pc = 0x204088u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x203EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        alloc__11PalMgrClassFi_0x203ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20408Cu; }
        else if (ctx->pc != 0x20408Cu) { ctx->pc = 0x20408Cu; }
    }
    if (ctx->pc != 0x20408Cu) { return; }
    ctx->pc = 0x20408Cu;
    // 0x20408c: 0x1e1e3c
    ctx->pc = 0x20408cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 24));
    // 0x204090: 0x31e3f
    ctx->pc = 0x204090u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x204094: 0x34cc0
    ctx->pc = 0x204094u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 3), 19));
    // 0x204098: 0x111c3c
    ctx->pc = 0x204098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x20409c: 0x31c3f
    ctx->pc = 0x20409cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2040a0: 0x32e00
    ctx->pc = 0x2040a0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 24));
    // 0x2040a4: 0x21203
    ctx->pc = 0x2040a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2040a8: 0x121c3c
    ctx->pc = 0x2040a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2040ac: 0x21140
    ctx->pc = 0x2040acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x2040b0: 0x31c3f
    ctx->pc = 0x2040b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2040b4: 0x491025
    ctx->pc = 0x2040b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2040b8: 0x31f40
    ctx->pc = 0x2040b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 29));
    // 0x2040bc: 0xa21025
    ctx->pc = 0x2040bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2040c0: 0x622825
    ctx->pc = 0x2040c0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2040c4: 0x32870004
    ctx->pc = 0x2040c4u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 20), 4));
    // 0x2040c8: 0x24030100
    ctx->pc = 0x2040c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2040cc: 0x24020010
    ctx->pc = 0x2040ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2040d0: 0x47180a
    ctx->pc = 0x2040d0u;
    if (GPR_U32(ctx, 7) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x2040d4: 0x33c3c
    ctx->pc = 0x2040d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2040d8: 0x72a02628
    ctx->pc = 0x2040d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2040dc: 0x72603628
    ctx->pc = 0x2040dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2040e0: 0x72e04628
    ctx->pc = 0x2040e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x2040e4: 0xc06ac90
    ctx->pc = 0x2040E4u;
    SET_GPR_U32(ctx, 31, 0x2040ECu);
    ctx->pc = 0x2040E8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->pc = 0x1AB240u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetPalette_0x1ab240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2040ECu; }
        else if (ctx->pc != 0x2040ECu) { ctx->pc = 0x2040ECu; }
    }
    if (ctx->pc != 0x2040ECu) { return; }
    ctx->pc = 0x2040ECu;
    // 0x2040ec: 0x7bbf0090
    ctx->pc = 0x2040ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2040f0: 0x7bbe0080
    ctx->pc = 0x2040f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2040f4: 0x7bb70070
    ctx->pc = 0x2040f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2040f8: 0x7bb60060
    ctx->pc = 0x2040f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2040fc: 0x7bb50050
    ctx->pc = 0x2040fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x204100: 0x7bb40040
    ctx->pc = 0x204100u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204104: 0x7bb30030
    ctx->pc = 0x204104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204108: 0x7bb20020
    ctx->pc = 0x204108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20410c: 0x7bb10010
    ctx->pc = 0x20410cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204110: 0x7bb00000
    ctx->pc = 0x204110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204114: 0x3e00008
    ctx->pc = 0x204114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204118u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20404Cu: goto label_20404c;
            case 0x20406Cu: goto label_20406c;
            case 0x204074u: goto label_204074;
            case 0x204078u: goto label_204078;
            case 0x204084u: goto label_204084;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20411Cu;
}
