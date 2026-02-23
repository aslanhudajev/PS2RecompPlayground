#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_PadActTwin__Fiii
// Address: 0x21b090 - 0x21b1a8
void new_PadActTwin__Fiii_0x21b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_PadActTwin__Fiii");


    ctx->pc = 0x21b090u;

    // 0x21b090: 0x27bdffa0
    ctx->pc = 0x21b090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21b094: 0x7fbf0050
    ctx->pc = 0x21b094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x21b098: 0x7fb40040
    ctx->pc = 0x21b098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21b09c: 0x7fb30030
    ctx->pc = 0x21b09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21b0a0: 0x7fb20020
    ctx->pc = 0x21b0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21b0a4: 0x7fb10010
    ctx->pc = 0x21b0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21b0a8: 0x24110001
    ctx->pc = 0x21b0a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b0ac: 0x7fb00000
    ctx->pc = 0x21b0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21b0b0: 0x14d10003
    ctx->pc = 0x21B0B0u;
    {
        const bool branch_taken_0x21b0b0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 17));
        ctx->pc = 0x21B0B4u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21b0b0) {
            ctx->pc = 0x21B0C0u;
            goto label_21b0c0;
        }
    }
    ctx->pc = 0x21B0B8u;
    // 0x21b0b8: 0x10000010
    ctx->pc = 0x21B0B8u;
    {
        const bool branch_taken_0x21b0b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B0BCu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21b0b8) {
            ctx->pc = 0x21B0FCu;
            goto label_21b0fc;
        }
    }
    ctx->pc = 0x21B0C0u;
label_21b0c0:
    // 0x21b0c0: 0x61880
    ctx->pc = 0x21b0c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x21b0c4: 0x662821
    ctx->pc = 0x21b0c4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21b0c8: 0x51880
    ctx->pc = 0x21b0c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x21b0cc: 0xa31821
    ctx->pc = 0x21b0ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21b0d0: 0x33040
    ctx->pc = 0x21b0d0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 1));
    // 0x21b0d4: 0x3c038888
    ctx->pc = 0x21b0d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
    // 0x21b0d8: 0x34638889
    ctx->pc = 0x21b0d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
    // 0x21b0dc: 0x660018
    ctx->pc = 0x21b0dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x21b0e0: 0x62fc2
    ctx->pc = 0x21b0e0u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 6), 31));
    // 0x21b0e4: 0x0
    ctx->pc = 0x21b0e4u;
    // NOP
    // 0x21b0e8: 0x1810
    ctx->pc = 0x21b0e8u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x21b0ec: 0x661821
    ctx->pc = 0x21b0ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21b0f0: 0x31943
    ctx->pc = 0x21b0f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x21b0f4: 0x658821
    ctx->pc = 0x21b0f4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21b0f8: 0x70009628
    ctx->pc = 0x21b0f8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_21b0fc:
    // 0x21b0fc: 0x24030001
    ctx->pc = 0x21b0fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b100: 0x64900b
    ctx->pc = 0x21b100u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
    // 0x21b104: 0x3c010050
    ctx->pc = 0x21b104u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21b108: 0x8424e504
    ctx->pc = 0x21b108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x21b10c: 0x2403000a
    ctx->pc = 0x21b10cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x21b110: 0x1483001d
    ctx->pc = 0x21B110u;
    {
        const bool branch_taken_0x21b110 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x21B114u;
        SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
        if (branch_taken_0x21b110) {
            ctx->pc = 0x21B188u;
            goto label_21b188;
        }
    }
    ctx->pc = 0x21B118u;
    // 0x21b118: 0x70008628
    ctx->pc = 0x21b118u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b11c: 0x2473dd20
    ctx->pc = 0x21b11cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 4294958368));
label_21b120:
    // 0x21b120: 0x8e640004
    ctx->pc = 0x21b120u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x21b124: 0x24030005
    ctx->pc = 0x21b124u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x21b128: 0x50830009
    ctx->pc = 0x21B128u;
    {
        const bool branch_taken_0x21b128 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x21b128) {
            ctx->pc = 0x21B12Cu;
            SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
            ctx->pc = 0x21B150u;
            goto label_21b150;
        }
    }
    ctx->pc = 0x21B130u;
    // 0x21b130: 0x24030003
    ctx->pc = 0x21b130u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x21b134: 0x10830005
    ctx->pc = 0x21B134u;
    {
        const bool branch_taken_0x21b134 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x21b134) {
            ctx->pc = 0x21B14Cu;
            goto label_21b14c;
        }
    }
    ctx->pc = 0x21B13Cu;
    // 0x21b13c: 0x10800003
    ctx->pc = 0x21B13Cu;
    {
        const bool branch_taken_0x21b13c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x21b13c) {
            ctx->pc = 0x21B14Cu;
            goto label_21b14c;
        }
    }
    ctx->pc = 0x21B144u;
    // 0x21b144: 0x1000000d
    ctx->pc = 0x21B144u;
    {
        const bool branch_taken_0x21b144 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B148u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x21b144) {
            ctx->pc = 0x21B17Cu;
            goto label_21b17c;
        }
    }
    ctx->pc = 0x21B14Cu;
label_21b14c:
    // 0x21b14c: 0x72002628
    ctx->pc = 0x21b14cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_21b150:
    // 0x21b150: 0x70002e28
    ctx->pc = 0x21b150u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b154: 0x72403628
    ctx->pc = 0x21b154u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x21b158: 0xc07beb0
    ctx->pc = 0x21B158u;
    SET_GPR_U32(ctx, 31, 0x21B160u);
    ctx->pc = 0x21B15Cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EFAC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_PadAct__Fiiii_0x1efac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B160u; }
        else if (ctx->pc != 0x21B160u) { ctx->pc = 0x21B160u; }
    }
    if (ctx->pc != 0x21B160u) { return; }
    ctx->pc = 0x21B160u;
    // 0x21b160: 0x72002628
    ctx->pc = 0x21b160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21b164: 0x24050001
    ctx->pc = 0x21b164u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b168: 0x72803628
    ctx->pc = 0x21b168u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x21b16c: 0xc07beb0
    ctx->pc = 0x21B16Cu;
    SET_GPR_U32(ctx, 31, 0x21B174u);
    ctx->pc = 0x21B170u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EFAC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_PadAct__Fiiii_0x1efac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B174u; }
        else if (ctx->pc != 0x21B174u) { ctx->pc = 0x21B174u; }
    }
    if (ctx->pc != 0x21B174u) { return; }
    ctx->pc = 0x21B174u;
    // 0x21b174: 0x0
    ctx->pc = 0x21b174u;
    // NOP
    // 0x21b178: 0x26100001
    ctx->pc = 0x21b178u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_21b17c:
    // 0x21b17c: 0x2a030002
    ctx->pc = 0x21b17cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x21b180: 0x1460ffe7
    ctx->pc = 0x21B180u;
    {
        const bool branch_taken_0x21b180 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21B184u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 840));
        if (branch_taken_0x21b180) {
            ctx->pc = 0x21B120u;
            goto label_21b120;
        }
    }
    ctx->pc = 0x21B188u;
label_21b188:
    // 0x21b188: 0x7bbf0050
    ctx->pc = 0x21b188u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21b18c: 0x7bb40040
    ctx->pc = 0x21b18cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b190: 0x7bb30030
    ctx->pc = 0x21b190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b194: 0x7bb20020
    ctx->pc = 0x21b194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b198: 0x7bb10010
    ctx->pc = 0x21b198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b19c: 0x7bb00000
    ctx->pc = 0x21b19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b1a0: 0x3e00008
    ctx->pc = 0x21B1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B1A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21B0C0u: goto label_21b0c0;
            case 0x21B0FCu: goto label_21b0fc;
            case 0x21B120u: goto label_21b120;
            case 0x21B14Cu: goto label_21b14c;
            case 0x21B150u: goto label_21b150;
            case 0x21B17Cu: goto label_21b17c;
            case 0x21B188u: goto label_21b188;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21B1A8u;
}
