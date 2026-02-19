#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ControlsUpdate
// Address: 0x2040e8 - 0x2047dc
void ControlsUpdate_0x2040e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2040e8u;

    // 0x2040e8: 0x27bdfed0
    ctx->pc = 0x2040e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2040ec: 0xffbf0120
    ctx->pc = 0x2040ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x2040f0: 0xffbe0110
    ctx->pc = 0x2040f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x2040f4: 0xffb70100
    ctx->pc = 0x2040f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 23));
    // 0x2040f8: 0xffb600f0
    ctx->pc = 0x2040f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x2040fc: 0xffb500e0
    ctx->pc = 0x2040fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 21));
    // 0x204100: 0xffb400d0
    ctx->pc = 0x204100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x204104: 0xffb300c0
    ctx->pc = 0x204104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
    // 0x204108: 0xffb200b0
    ctx->pc = 0x204108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x20410c: 0xffb100a0
    ctx->pc = 0x20410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
    // 0x204110: 0xffb00090
    ctx->pc = 0x204110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x204114: 0x3c020031
    ctx->pc = 0x204114u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x204118: 0x8c420f14
    ctx->pc = 0x204118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3860)));
    // 0x20411c: 0x104001a3
    ctx->pc = 0x20411Cu;
    {
        const bool branch_taken_0x20411c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x204120u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x20411c) {
            ctx->pc = 0x2047ACu;
            goto label_2047ac;
        }
    }
    ctx->pc = 0x204124u;
    // 0x204124: 0x8c420f18
    ctx->pc = 0x204124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3864)));
    // 0x204128: 0x144001a1
    ctx->pc = 0x204128u;
    {
        const bool branch_taken_0x204128 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20412Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
        if (branch_taken_0x204128) {
            ctx->pc = 0x2047B0u;
            goto label_2047b0;
        }
    }
    ctx->pc = 0x204130u;
    // 0x204130: 0x3c020031
    ctx->pc = 0x204130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x204134: 0x8c420f08
    ctx->pc = 0x204134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x204138: 0x5440019e
    ctx->pc = 0x204138u;
    {
        const bool branch_taken_0x204138 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x204138) {
            ctx->pc = 0x20413Cu;
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
            ctx->pc = 0x2047B4u;
            goto label_2047b4;
        }
    }
    ctx->pc = 0x204140u;
    // 0x204140: 0x3c030031
    ctx->pc = 0x204140u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x204144: 0x8c621d60
    ctx->pc = 0x204144u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 7520)));
    // 0x204148: 0x24420001
    ctx->pc = 0x204148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20414c: 0xac621d60
    ctx->pc = 0x20414cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7520), GPR_U32(ctx, 2));
    // 0x204150: 0x3c03003c
    ctx->pc = 0x204150u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x204154: 0x24020001
    ctx->pc = 0x204154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x204158: 0xac62bde0
    ctx->pc = 0x204158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950368), GPR_U32(ctx, 2));
    // 0x20415c: 0x3c030031
    ctx->pc = 0x20415cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x204160: 0x240200c8
    ctx->pc = 0x204160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 200));
    // 0x204164: 0xac620f0c
    ctx->pc = 0x204164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3852), GPR_U32(ctx, 2));
    // 0x204168: 0xafa00030
    ctx->pc = 0x204168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x20416c: 0x0
    ctx->pc = 0x20416cu;
    // NOP
label_204170:
    // 0x204170: 0x8fa40030
    ctx->pc = 0x204170u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204174: 0xc0818ec
    ctx->pc = 0x204174u;
    SET_GPR_U32(ctx, 31, 0x20417Cu);
    ctx->pc = 0x204178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2063B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        joyGetStatus_0x2063b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20417Cu; }
    }
    if (ctx->pc != 0x20417Cu) { return; }
    ctx->pc = 0x20417Cu;
    // 0x20417c: 0x10400183
    ctx->pc = 0x20417Cu;
    {
        const bool branch_taken_0x20417c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x204180u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x20417c) {
            ctx->pc = 0x20478Cu;
            goto label_20478c;
        }
    }
    ctx->pc = 0x204184u;
    // 0x204184: 0x28880
    ctx->pc = 0x204184u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 2));
    // 0x204188: 0x3c030031
    ctx->pc = 0x204188u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20418c: 0x24630ea0
    ctx->pc = 0x20418cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3744));
    // 0x204190: 0x2231021
    ctx->pc = 0x204190u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x204194: 0x8c500000
    ctx->pc = 0x204194u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204198: 0x24040014
    ctx->pc = 0x204198u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    // 0x20419c: 0xc080f40
    ctx->pc = 0x20419Cu;
    SET_GPR_U32(ctx, 31, 0x2041A4u);
    ctx->pc = 0x2041A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_button_0x203d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2041A4u; }
    }
    if (ctx->pc != 0x2041A4u) { return; }
    ctx->pc = 0x2041A4u;
    // 0x2041a4: 0xafa20034
    ctx->pc = 0x2041a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2041a8: 0x24040015
    ctx->pc = 0x2041a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
    // 0x2041ac: 0xc080f40
    ctx->pc = 0x2041ACu;
    SET_GPR_U32(ctx, 31, 0x2041B4u);
    ctx->pc = 0x2041B0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_button_0x203d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2041B4u; }
    }
    if (ctx->pc != 0x2041B4u) { return; }
    ctx->pc = 0x2041B4u;
    // 0x2041b4: 0xafa20038
    ctx->pc = 0x2041b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2041b8: 0x8fa40034
    ctx->pc = 0x2041b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2041bc: 0x10800009
    ctx->pc = 0x2041BCu;
    {
        const bool branch_taken_0x2041bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2041C0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2041bc) {
            ctx->pc = 0x2041E4u;
            goto label_2041e4;
        }
    }
    ctx->pc = 0x2041C4u;
    // 0x2041c4: 0x10400007
    ctx->pc = 0x2041C4u;
    {
        const bool branch_taken_0x2041c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2041C8u;
        SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
        if (branch_taken_0x2041c4) {
            ctx->pc = 0x2041E4u;
            goto label_2041e4;
        }
    }
    ctx->pc = 0x2041CCu;
    // 0x2041cc: 0x24c60870
    ctx->pc = 0x2041ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2160));
    // 0x2041d0: 0x2261821
    ctx->pc = 0x2041d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2041d4: 0x8c620000
    ctx->pc = 0x2041d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2041d8: 0x24420001
    ctx->pc = 0x2041d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2041dc: 0x10000006
    ctx->pc = 0x2041DCu;
    {
        const bool branch_taken_0x2041dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2041E0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2041dc) {
            ctx->pc = 0x2041F8u;
            goto label_2041f8;
        }
    }
    ctx->pc = 0x2041E4u;
label_2041e4:
    // 0x2041e4: 0x31080
    ctx->pc = 0x2041e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2041e8: 0x3c040032
    ctx->pc = 0x2041e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x2041ec: 0x24840870
    ctx->pc = 0x2041ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2160));
    // 0x2041f0: 0x441021
    ctx->pc = 0x2041f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2041f4: 0xac400000
    ctx->pc = 0x2041f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2041f8:
    // 0x2041f8: 0x601002d
    ctx->pc = 0x2041F8u;
    {
        const bool branch_taken_0x2041f8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2041FCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
        if (branch_taken_0x2041f8) {
            ctx->pc = 0x2042B0u;
            goto label_2042b0;
        }
    }
    ctx->pc = 0x204200u;
    // 0x204200: 0x3c060031
    ctx->pc = 0x204200u;
    SET_GPR_U32(ctx, 6, ((uint32_t)49 << 16));
    // 0x204204: 0x8cc30e4c
    ctx->pc = 0x204204u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 3660)));
    // 0x204208: 0x3062000f
    ctx->pc = 0x204208u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
    // 0x20420c: 0x10400028
    ctx->pc = 0x20420Cu;
    {
        const bool branch_taken_0x20420c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x204210u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        if (branch_taken_0x20420c) {
            ctx->pc = 0x2042B0u;
            goto label_2042b0;
        }
    }
    ctx->pc = 0x204214u;
    // 0x204214: 0x1040002e
    ctx->pc = 0x204214u;
    {
        const bool branch_taken_0x204214 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x204218u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x204214) {
            ctx->pc = 0x2042D0u;
            goto label_2042d0;
        }
    }
    ctx->pc = 0x20421Cu;
    // 0x20421c: 0x1440000a
    ctx->pc = 0x20421Cu;
    {
        const bool branch_taken_0x20421c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x204220u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20421c) {
            ctx->pc = 0x204248u;
            goto label_204248;
        }
    }
    ctx->pc = 0x204224u;
    // 0x204224: 0xc0102d
    ctx->pc = 0x204224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204228: 0x8c430e4c
    ctx->pc = 0x204228u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 3660)));
    // 0x20422c: 0x26100001
    ctx->pc = 0x20422cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_204230:
    // 0x204230: 0x2a020004
    ctx->pc = 0x204230u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x204234: 0x10400018
    ctx->pc = 0x204234u;
    {
        const bool branch_taken_0x204234 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x204238u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
        if (branch_taken_0x204234) {
            ctx->pc = 0x204298u;
            goto label_204298;
        }
    }
    ctx->pc = 0x20423Cu;
    // 0x20423c: 0x30420001
    ctx->pc = 0x20423cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x204240: 0x5040fffb
    ctx->pc = 0x204240u;
    {
        const bool branch_taken_0x204240 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x204240) {
            ctx->pc = 0x204244u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x204230u;
            goto label_204230;
        }
    }
    ctx->pc = 0x204248u;
label_204248:
    // 0x204248: 0x2a020004
    ctx->pc = 0x204248u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x20424c: 0x10400012
    ctx->pc = 0x20424Cu;
    {
        const bool branch_taken_0x20424c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x204250u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x20424c) {
            ctx->pc = 0x204298u;
            goto label_204298;
        }
    }
    ctx->pc = 0x204254u;
    // 0x204254: 0x24630e90
    ctx->pc = 0x204254u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3728));
    // 0x204258: 0x101080
    ctx->pc = 0x204258u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x20425c: 0x431021
    ctx->pc = 0x20425cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204260: 0x8fa30030
    ctx->pc = 0x204260u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204264: 0xac430000
    ctx->pc = 0x204264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x204268: 0x31080
    ctx->pc = 0x204268u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20426c: 0x3c040031
    ctx->pc = 0x20426cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x204270: 0x24840ea0
    ctx->pc = 0x204270u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3744));
    // 0x204274: 0x441021
    ctx->pc = 0x204274u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x204278: 0xac500000
    ctx->pc = 0x204278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x20427c: 0x24020001
    ctx->pc = 0x20427cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x204280: 0x2021004
    ctx->pc = 0x204280u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x204284: 0x21027
    ctx->pc = 0x204284u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x204288: 0x3c060031
    ctx->pc = 0x204288u;
    SET_GPR_U32(ctx, 6, ((uint32_t)49 << 16));
    // 0x20428c: 0x8cc30e4c
    ctx->pc = 0x20428cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 3660)));
    // 0x204290: 0x431024
    ctx->pc = 0x204290u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204294: 0xacc20e4c
    ctx->pc = 0x204294u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3660), GPR_U32(ctx, 2));
label_204298:
    // 0x204298: 0x3c030031
    ctx->pc = 0x204298u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20429c: 0x8c620e4c
    ctx->pc = 0x20429cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3660)));
    // 0x2042a0: 0x2403f0ff
    ctx->pc = 0x2042a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963455));
    // 0x2042a4: 0x431024
    ctx->pc = 0x2042a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2042a8: 0x10000008
    ctx->pc = 0x2042A8u;
    {
        const bool branch_taken_0x2042a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2042ACu;
        SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
        if (branch_taken_0x2042a8) {
            ctx->pc = 0x2042CCu;
            goto label_2042cc;
        }
    }
    ctx->pc = 0x2042B0u;
label_2042b0:
    // 0x2042b0: 0x8c830e4c
    ctx->pc = 0x2042b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 3660)));
    // 0x2042b4: 0x30620f00
    ctx->pc = 0x2042b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3840));
    // 0x2042b8: 0x10400005
    ctx->pc = 0x2042B8u;
    {
        const bool branch_taken_0x2042b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2042BCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        if (branch_taken_0x2042b8) {
            ctx->pc = 0x2042D0u;
            goto label_2042d0;
        }
    }
    ctx->pc = 0x2042C0u;
    // 0x2042c0: 0x10c00003
    ctx->pc = 0x2042C0u;
    {
        const bool branch_taken_0x2042c0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2042C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294963455));
        if (branch_taken_0x2042c0) {
            ctx->pc = 0x2042D0u;
            goto label_2042d0;
        }
    }
    ctx->pc = 0x2042C8u;
    // 0x2042c8: 0x621024
    ctx->pc = 0x2042c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2042cc:
    // 0x2042cc: 0xac820e4c
    ctx->pc = 0x2042ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3660), GPR_U32(ctx, 2));
label_2042d0:
    // 0x2042d0: 0x6000008
    ctx->pc = 0x2042D0u;
    {
        const bool branch_taken_0x2042d0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2042D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x2042d0) {
            ctx->pc = 0x2042F4u;
            goto label_2042f4;
        }
    }
    ctx->pc = 0x2042D8u;
    // 0x2042d8: 0x3c030031
    ctx->pc = 0x2042d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2042dc: 0x24631bbc
    ctx->pc = 0x2042dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7100));
    // 0x2042e0: 0x600013
    ctx->pc = 0x2042e0u;
    ctx->lo = GPR_U32(ctx, 3);
    // 0x2042e4: 0x72021000
    ctx->pc = 0x2042e4u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2042e8: 0x8c420000
    ctx->pc = 0x2042e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2042ec: 0x10000002
    ctx->pc = 0x2042ECu;
    {
        const bool branch_taken_0x2042ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2042F0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        if (branch_taken_0x2042ec) {
            ctx->pc = 0x2042F8u;
            goto label_2042f8;
        }
    }
    ctx->pc = 0x2042F4u;
label_2042f4:
    // 0x2042f4: 0xafa00068
    ctx->pc = 0x2042f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_2042f8:
    // 0x2042f8: 0xc080dba
    ctx->pc = 0x2042F8u;
    SET_GPR_U32(ctx, 31, 0x204300u);
    ctx->pc = 0x2042FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x2036E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        padIsAnalog_0x2036e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204300u; }
    }
    if (ctx->pc != 0x204300u) { return; }
    ctx->pc = 0x204300u;
    // 0x204300: 0xafa20064
    ctx->pc = 0x204300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x204304: 0xc080dca
    ctx->pc = 0x204304u;
    SET_GPR_U32(ctx, 31, 0x20430Cu);
    ctx->pc = 0x204308u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x203728u;
    {
        const uint32_t __entryPc = ctx->pc;
        padHasStick_0x203728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20430Cu; }
    }
    if (ctx->pc != 0x20430Cu) { return; }
    ctx->pc = 0x20430Cu;
    // 0x20430c: 0x40802d
    ctx->pc = 0x20430cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204310: 0x3a0202d
    ctx->pc = 0x204310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204314: 0xc080f12
    ctx->pc = 0x204314u;
    SET_GPR_U32(ctx, 31, 0x20431Cu);
    ctx->pc = 0x204318u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x203C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_dir_0x203c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20431Cu; }
    }
    if (ctx->pc != 0x20431Cu) { return; }
    ctx->pc = 0x20431Cu;
    // 0x20431c: 0xafa20054
    ctx->pc = 0x20431cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x204320: 0x27a40002
    ctx->pc = 0x204320u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 2));
    // 0x204324: 0xc080f12
    ctx->pc = 0x204324u;
    SET_GPR_U32(ctx, 31, 0x20432Cu);
    ctx->pc = 0x204328u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x203C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_dir_0x203c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20432Cu; }
    }
    if (ctx->pc != 0x20432Cu) { return; }
    ctx->pc = 0x20432Cu;
    // 0x20432c: 0xafa20058
    ctx->pc = 0x20432cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x204330: 0x27a40004
    ctx->pc = 0x204330u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 4));
    // 0x204334: 0xc080f12
    ctx->pc = 0x204334u;
    SET_GPR_U32(ctx, 31, 0x20433Cu);
    ctx->pc = 0x204338u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x203C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_dir_0x203c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20433Cu; }
    }
    if (ctx->pc != 0x20433Cu) { return; }
    ctx->pc = 0x20433Cu;
    // 0x20433c: 0xafa2005c
    ctx->pc = 0x20433cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x204340: 0x27a40006
    ctx->pc = 0x204340u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 6));
    // 0x204344: 0xc080f12
    ctx->pc = 0x204344u;
    SET_GPR_U32(ctx, 31, 0x20434Cu);
    ctx->pc = 0x204348u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x203C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_dir_0x203c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20434Cu; }
    }
    if (ctx->pc != 0x20434Cu) { return; }
    ctx->pc = 0x20434Cu;
    // 0x20434c: 0x12000022
    ctx->pc = 0x20434Cu;
    {
        const bool branch_taken_0x20434c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x204350u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        if (branch_taken_0x20434c) {
            ctx->pc = 0x2043D8u;
            goto label_2043d8;
        }
    }
    ctx->pc = 0x204354u;
    // 0x204354: 0x27a40008
    ctx->pc = 0x204354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 8));
    // 0x204358: 0xc080f12
    ctx->pc = 0x204358u;
    SET_GPR_U32(ctx, 31, 0x204360u);
    ctx->pc = 0x20435Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_dir_0x203c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204360u; }
    }
    if (ctx->pc != 0x204360u) { return; }
    ctx->pc = 0x204360u;
    // 0x204360: 0x40b02d
    ctx->pc = 0x204360u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204364: 0x27a4000a
    ctx->pc = 0x204364u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 10));
    // 0x204368: 0xc080f12
    ctx->pc = 0x204368u;
    SET_GPR_U32(ctx, 31, 0x204370u);
    ctx->pc = 0x20436Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_dir_0x203c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204370u; }
    }
    if (ctx->pc != 0x204370u) { return; }
    ctx->pc = 0x204370u;
    // 0x204370: 0x40f02d
    ctx->pc = 0x204370u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204374: 0x27a4000c
    ctx->pc = 0x204374u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 12));
    // 0x204378: 0xc080f12
    ctx->pc = 0x204378u;
    SET_GPR_U32(ctx, 31, 0x204380u);
    ctx->pc = 0x20437Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_dir_0x203c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204380u; }
    }
    if (ctx->pc != 0x204380u) { return; }
    ctx->pc = 0x204380u;
    // 0x204380: 0x40b82d
    ctx->pc = 0x204380u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204384: 0x27a4000e
    ctx->pc = 0x204384u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 14));
    // 0x204388: 0xc080f12
    ctx->pc = 0x204388u;
    SET_GPR_U32(ctx, 31, 0x204390u);
    ctx->pc = 0x20438Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_dir_0x203c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204390u; }
    }
    if (ctx->pc != 0x204390u) { return; }
    ctx->pc = 0x204390u;
    // 0x204390: 0xafa20050
    ctx->pc = 0x204390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x204394: 0x27a4001c
    ctx->pc = 0x204394u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 28));
    // 0x204398: 0xc080f12
    ctx->pc = 0x204398u;
    SET_GPR_U32(ctx, 31, 0x2043A0u);
    ctx->pc = 0x20439Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_dir_0x203c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2043A0u; }
    }
    if (ctx->pc != 0x2043A0u) { return; }
    ctx->pc = 0x2043A0u;
    // 0x2043a0: 0x40982d
    ctx->pc = 0x2043a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043a4: 0x27a4001e
    ctx->pc = 0x2043a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 30));
    // 0x2043a8: 0xc080f12
    ctx->pc = 0x2043A8u;
    SET_GPR_U32(ctx, 31, 0x2043B0u);
    ctx->pc = 0x2043ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_dir_0x203c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2043B0u; }
    }
    if (ctx->pc != 0x2043B0u) { return; }
    ctx->pc = 0x2043B0u;
    // 0x2043b0: 0x40a02d
    ctx->pc = 0x2043b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043b4: 0x27a40020
    ctx->pc = 0x2043b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2043b8: 0xc080f12
    ctx->pc = 0x2043B8u;
    SET_GPR_U32(ctx, 31, 0x2043C0u);
    ctx->pc = 0x2043BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_dir_0x203c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2043C0u; }
    }
    if (ctx->pc != 0x2043C0u) { return; }
    ctx->pc = 0x2043C0u;
    // 0x2043c0: 0x40a82d
    ctx->pc = 0x2043c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043c4: 0x27a40022
    ctx->pc = 0x2043c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 34));
    // 0x2043c8: 0xc080f12
    ctx->pc = 0x2043C8u;
    SET_GPR_U32(ctx, 31, 0x2043D0u);
    ctx->pc = 0x2043CCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_dir_0x203c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2043D0u; }
    }
    if (ctx->pc != 0x2043D0u) { return; }
    ctx->pc = 0x2043D0u;
    // 0x2043d0: 0x10000009
    ctx->pc = 0x2043D0u;
    {
        const bool branch_taken_0x2043d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2043D4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2043d0) {
            ctx->pc = 0x2043F8u;
            goto label_2043f8;
        }
    }
    ctx->pc = 0x2043D8u;
label_2043d8:
    // 0x2043d8: 0xb02d
    ctx->pc = 0x2043d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043dc: 0xf02d
    ctx->pc = 0x2043dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043e0: 0xb82d
    ctx->pc = 0x2043e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043e4: 0xafa00050
    ctx->pc = 0x2043e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2043e8: 0x982d
    ctx->pc = 0x2043e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043ec: 0xa02d
    ctx->pc = 0x2043ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043f0: 0xa82d
    ctx->pc = 0x2043f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043f4: 0x902d
    ctx->pc = 0x2043f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2043f8:
    // 0x2043f8: 0x24020002
    ctx->pc = 0x2043f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2043fc: 0x8fa40068
    ctx->pc = 0x2043fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x204400: 0x1482000e
    ctx->pc = 0x204400u;
    {
        const bool branch_taken_0x204400 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x204404u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x204400) {
            ctx->pc = 0x20443Cu;
            goto label_20443c;
        }
    }
    ctx->pc = 0x204408u;
    // 0x204408: 0x56600008
    ctx->pc = 0x204408u;
    {
        const bool branch_taken_0x204408 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x204408) {
            ctx->pc = 0x20440Cu;
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x20442Cu;
            goto label_20442c;
        }
    }
    ctx->pc = 0x204410u;
    // 0x204410: 0x56800006
    ctx->pc = 0x204410u;
    {
        const bool branch_taken_0x204410 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x204410) {
            ctx->pc = 0x204414u;
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x20442Cu;
            goto label_20442c;
        }
    }
    ctx->pc = 0x204418u;
    // 0x204418: 0x56a00004
    ctx->pc = 0x204418u;
    {
        const bool branch_taken_0x204418 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x204418) {
            ctx->pc = 0x20441Cu;
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x20442Cu;
            goto label_20442c;
        }
    }
    ctx->pc = 0x204420u;
    // 0x204420: 0x12400007
    ctx->pc = 0x204420u;
    {
        const bool branch_taken_0x204420 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x204424u;
        if (GPR_U32(ctx, 22) == 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 6));
        if (branch_taken_0x204420) {
            ctx->pc = 0x204440u;
            goto label_204440;
        }
    }
    ctx->pc = 0x204428u;
    // 0x204428: 0x260b02d
    ctx->pc = 0x204428u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20442c:
    // 0x20442c: 0x280f02d
    ctx->pc = 0x20442cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204430: 0x2a0b82d
    ctx->pc = 0x204430u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204434: 0xafb20050
    ctx->pc = 0x204434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 18));
    // 0x204438: 0x8fa60054
    ctx->pc = 0x204438u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_20443c:
    // 0x20443c: 0xd6b00a
    ctx->pc = 0x20443cu;
    if (GPR_U32(ctx, 22) == 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 6));
label_204440:
    // 0x204440: 0x8fa20058
    ctx->pc = 0x204440u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x204444: 0x5ef00a
    ctx->pc = 0x204444u;
    if (GPR_U32(ctx, 30) == 0) SET_GPR_U32(ctx, 30, GPR_U32(ctx, 2));
    // 0x204448: 0x8fa3005c
    ctx->pc = 0x204448u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x20444c: 0x77b80a
    ctx->pc = 0x20444cu;
    if (GPR_U32(ctx, 23) == 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 3));
    // 0x204450: 0x8fa40060
    ctx->pc = 0x204450u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x204454: 0x8fa60050
    ctx->pc = 0x204454u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x204458: 0xc6200b
    ctx->pc = 0x204458u;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 6));
    // 0x20445c: 0xafa40050
    ctx->pc = 0x20445cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x204460: 0x24040009
    ctx->pc = 0x204460u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    // 0x204464: 0xc080f40
    ctx->pc = 0x204464u;
    SET_GPR_U32(ctx, 31, 0x20446Cu);
    ctx->pc = 0x204468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_button_0x203d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20446Cu; }
    }
    if (ctx->pc != 0x20446Cu) { return; }
    ctx->pc = 0x20446Cu;
    // 0x20446c: 0xafa2003c
    ctx->pc = 0x20446cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x204470: 0x24040008
    ctx->pc = 0x204470u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x204474: 0xc080f40
    ctx->pc = 0x204474u;
    SET_GPR_U32(ctx, 31, 0x20447Cu);
    ctx->pc = 0x204478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_button_0x203d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20447Cu; }
    }
    if (ctx->pc != 0x20447Cu) { return; }
    ctx->pc = 0x20447Cu;
    // 0x20447c: 0xafa20040
    ctx->pc = 0x20447cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x204480: 0x24040013
    ctx->pc = 0x204480u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 19));
    // 0x204484: 0xc080f40
    ctx->pc = 0x204484u;
    SET_GPR_U32(ctx, 31, 0x20448Cu);
    ctx->pc = 0x204488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_button_0x203d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20448Cu; }
    }
    if (ctx->pc != 0x20448Cu) { return; }
    ctx->pc = 0x20448Cu;
    // 0x20448c: 0xafa20044
    ctx->pc = 0x20448cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x204490: 0x24040012
    ctx->pc = 0x204490u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
    // 0x204494: 0xc080f40
    ctx->pc = 0x204494u;
    SET_GPR_U32(ctx, 31, 0x20449Cu);
    ctx->pc = 0x204498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_button_0x203d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20449Cu; }
    }
    if (ctx->pc != 0x20449Cu) { return; }
    ctx->pc = 0x20449Cu;
    // 0x20449c: 0xafa20048
    ctx->pc = 0x20449cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2044a0: 0x2404000c
    ctx->pc = 0x2044a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2044a4: 0xc080f40
    ctx->pc = 0x2044A4u;
    SET_GPR_U32(ctx, 31, 0x2044ACu);
    ctx->pc = 0x2044A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_button_0x203d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2044ACu; }
    }
    if (ctx->pc != 0x2044ACu) { return; }
    ctx->pc = 0x2044ACu;
    // 0x2044ac: 0xafa2004c
    ctx->pc = 0x2044acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2044b0: 0x2404000b
    ctx->pc = 0x2044b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
    // 0x2044b4: 0xc080f40
    ctx->pc = 0x2044B4u;
    SET_GPR_U32(ctx, 31, 0x2044BCu);
    ctx->pc = 0x2044B8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_button_0x203d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2044BCu; }
    }
    if (ctx->pc != 0x2044BCu) { return; }
    ctx->pc = 0x2044BCu;
    // 0x2044bc: 0x40882d
    ctx->pc = 0x2044bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2044c0: 0x2404000d
    ctx->pc = 0x2044c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    // 0x2044c4: 0xc080f40
    ctx->pc = 0x2044C4u;
    SET_GPR_U32(ctx, 31, 0x2044CCu);
    ctx->pc = 0x2044C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_button_0x203d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2044CCu; }
    }
    if (ctx->pc != 0x2044CCu) { return; }
    ctx->pc = 0x2044CCu;
    // 0x2044cc: 0x40802d
    ctx->pc = 0x2044ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2044d0: 0x2404000a
    ctx->pc = 0x2044d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2044d4: 0xc080f40
    ctx->pc = 0x2044D4u;
    SET_GPR_U32(ctx, 31, 0x2044DCu);
    ctx->pc = 0x2044D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_button_0x203d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2044DCu; }
    }
    if (ctx->pc != 0x2044DCu) { return; }
    ctx->pc = 0x2044DCu;
    // 0x2044dc: 0x3c050031
    ctx->pc = 0x2044dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x2044e0: 0x24a51cc0
    ctx->pc = 0x2044e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7360));
    // 0x2044e4: 0x8fa30030
    ctx->pc = 0x2044e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2044e8: 0x31880
    ctx->pc = 0x2044e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2044ec: 0xafa3006c
    ctx->pc = 0x2044ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x2044f0: 0x652821
    ctx->pc = 0x2044f0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2044f4: 0x141880
    ctx->pc = 0x2044f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
    // 0x2044f8: 0x731825
    ctx->pc = 0x2044f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2044fc: 0x122180
    ctx->pc = 0x2044fcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 6));
    // 0x204500: 0x641825
    ctx->pc = 0x204500u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204504: 0x152100
    ctx->pc = 0x204504u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 21), 4));
    // 0x204508: 0x641825
    ctx->pc = 0x204508u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20450c: 0x8ca40000
    ctx->pc = 0x20450cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x204510: 0x641825
    ctx->pc = 0x204510u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204514: 0xaca30000
    ctx->pc = 0x204514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x204518: 0x8fa40054
    ctx->pc = 0x204518u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x20451c: 0x4202b
    ctx->pc = 0x20451cu;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x204520: 0xafa40054
    ctx->pc = 0x204520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x204524: 0x8fa60058
    ctx->pc = 0x204524u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x204528: 0x6302b
    ctx->pc = 0x204528u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x20452c: 0xafa60058
    ctx->pc = 0x20452cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x204530: 0x8fa3005c
    ctx->pc = 0x204530u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x204534: 0x3182b
    ctx->pc = 0x204534u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x204538: 0xafa3005c
    ctx->pc = 0x204538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x20453c: 0x8fa40060
    ctx->pc = 0x20453cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x204540: 0x4202b
    ctx->pc = 0x204540u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x204544: 0xafa40060
    ctx->pc = 0x204544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x204548: 0x3c050031
    ctx->pc = 0x204548u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x20454c: 0x24a51ca0
    ctx->pc = 0x20454cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7328));
    // 0x204550: 0x8fa6006c
    ctx->pc = 0x204550u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x204554: 0xc52821
    ctx->pc = 0x204554u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x204558: 0x1e1880
    ctx->pc = 0x204558u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 30), 2));
    // 0x20455c: 0x761825
    ctx->pc = 0x20455cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x204560: 0x8fa60050
    ctx->pc = 0x204560u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x204564: 0x62180
    ctx->pc = 0x204564u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 6));
    // 0x204568: 0x641825
    ctx->pc = 0x204568u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20456c: 0x172100
    ctx->pc = 0x20456cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 23), 4));
    // 0x204570: 0x641825
    ctx->pc = 0x204570u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204574: 0x8fa60034
    ctx->pc = 0x204574u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x204578: 0x62480
    ctx->pc = 0x204578u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 18));
    // 0x20457c: 0x641825
    ctx->pc = 0x20457cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204580: 0x8fa60038
    ctx->pc = 0x204580u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204584: 0x624c0
    ctx->pc = 0x204584u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 19));
    // 0x204588: 0x641825
    ctx->pc = 0x204588u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20458c: 0x8fa4003c
    ctx->pc = 0x20458cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x204590: 0x42540
    ctx->pc = 0x204590u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 21));
    // 0x204594: 0xafa40070
    ctx->pc = 0x204594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x204598: 0x641825
    ctx->pc = 0x204598u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20459c: 0x8fa60040
    ctx->pc = 0x20459cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2045a0: 0x63500
    ctx->pc = 0x2045a0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 20));
    // 0x2045a4: 0xafa60074
    ctx->pc = 0x2045a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 6));
    // 0x2045a8: 0x661825
    ctx->pc = 0x2045a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2045ac: 0x8fa40044
    ctx->pc = 0x2045acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2045b0: 0x425c0
    ctx->pc = 0x2045b0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 23));
    // 0x2045b4: 0xafa40078
    ctx->pc = 0x2045b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2045b8: 0x641825
    ctx->pc = 0x2045b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2045bc: 0x8fa60048
    ctx->pc = 0x2045bcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2045c0: 0x63580
    ctx->pc = 0x2045c0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 22));
    // 0x2045c4: 0xafa6007c
    ctx->pc = 0x2045c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 6));
    // 0x2045c8: 0x661825
    ctx->pc = 0x2045c8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2045cc: 0x8fa4004c
    ctx->pc = 0x2045ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2045d0: 0x426c0
    ctx->pc = 0x2045d0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 27));
    // 0x2045d4: 0xafa40080
    ctx->pc = 0x2045d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2045d8: 0x641825
    ctx->pc = 0x2045d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2045dc: 0x118e00
    ctx->pc = 0x2045dcu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 24));
    // 0x2045e0: 0x711825
    ctx->pc = 0x2045e0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2045e4: 0x108640
    ctx->pc = 0x2045e4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 25));
    // 0x2045e8: 0x701825
    ctx->pc = 0x2045e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2045ec: 0x21680
    ctx->pc = 0x2045ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 26));
    // 0x2045f0: 0x621825
    ctx->pc = 0x2045f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2045f4: 0x8fa60058
    ctx->pc = 0x2045f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2045f8: 0x61740
    ctx->pc = 0x2045f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 29));
    // 0x2045fc: 0x621825
    ctx->pc = 0x2045fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x204600: 0x8fa40054
    ctx->pc = 0x204600u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x204604: 0x41700
    ctx->pc = 0x204604u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 28));
    // 0x204608: 0x621825
    ctx->pc = 0x204608u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20460c: 0x8fa60060
    ctx->pc = 0x20460cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x204610: 0x617c0
    ctx->pc = 0x204610u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 31));
    // 0x204614: 0x621825
    ctx->pc = 0x204614u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x204618: 0x8fa4005c
    ctx->pc = 0x204618u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x20461c: 0x41780
    ctx->pc = 0x20461cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 30));
    // 0x204620: 0x621825
    ctx->pc = 0x204620u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x204624: 0x8ca20000
    ctx->pc = 0x204624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x204628: 0x621825
    ctx->pc = 0x204628u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20462c: 0xaca30000
    ctx->pc = 0x20462cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x204630: 0x8fa60064
    ctx->pc = 0x204630u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x204634: 0x10c00044
    ctx->pc = 0x204634u;
    {
        const bool branch_taken_0x204634 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x204638u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x204634) {
            ctx->pc = 0x204748u;
            goto label_204748;
        }
    }
    ctx->pc = 0x20463Cu;
    // 0x20463c: 0xc080f32
    ctx->pc = 0x20463Cu;
    SET_GPR_U32(ctx, 31, 0x204644u);
    ctx->pc = 0x204640u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x203CC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_analog_dir_0x203cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204644u; }
    }
    if (ctx->pc != 0x204644u) { return; }
    ctx->pc = 0x204644u;
    // 0x204644: 0x40b02d
    ctx->pc = 0x204644u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204648: 0xc080f32
    ctx->pc = 0x204648u;
    SET_GPR_U32(ctx, 31, 0x204650u);
    ctx->pc = 0x20464Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 10));
    ctx->pc = 0x203CC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_analog_dir_0x203cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204650u; }
    }
    if (ctx->pc != 0x204650u) { return; }
    ctx->pc = 0x204650u;
    // 0x204650: 0x40f02d
    ctx->pc = 0x204650u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204654: 0xc080f32
    ctx->pc = 0x204654u;
    SET_GPR_U32(ctx, 31, 0x20465Cu);
    ctx->pc = 0x204658u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x203CC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_analog_dir_0x203cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20465Cu; }
    }
    if (ctx->pc != 0x20465Cu) { return; }
    ctx->pc = 0x20465Cu;
    // 0x20465c: 0x40b82d
    ctx->pc = 0x20465cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204660: 0xc080f32
    ctx->pc = 0x204660u;
    SET_GPR_U32(ctx, 31, 0x204668u);
    ctx->pc = 0x204664u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 14));
    ctx->pc = 0x203CC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_analog_dir_0x203cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204668u; }
    }
    if (ctx->pc != 0x204668u) { return; }
    ctx->pc = 0x204668u;
    // 0x204668: 0x8fa3006c
    ctx->pc = 0x204668u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x20466c: 0x3c040031
    ctx->pc = 0x20466cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x204670: 0x24841d00
    ctx->pc = 0x204670u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7424));
    // 0x204674: 0x641821
    ctx->pc = 0x204674u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204678: 0xafa30084
    ctx->pc = 0x204678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
    // 0x20467c: 0x8fa6006c
    ctx->pc = 0x20467cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x204680: 0x3c030031
    ctx->pc = 0x204680u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x204684: 0x24631ce0
    ctx->pc = 0x204684u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7392));
    // 0x204688: 0xc39021
    ctx->pc = 0x204688u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x20468c: 0x2c0202d
    ctx->pc = 0x20468cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204690: 0x3c0282d
    ctx->pc = 0x204690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204694: 0x2e0302d
    ctx->pc = 0x204694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204698: 0x40382d
    ctx->pc = 0x204698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20469c: 0x8fa80084
    ctx->pc = 0x20469cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2046a0: 0xc080fd8
    ctx->pc = 0x2046A0u;
    SET_GPR_U32(ctx, 31, 0x2046A8u);
    ctx->pc = 0x2046A4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_analog_stick_0x203f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2046A8u; }
    }
    if (ctx->pc != 0x2046A8u) { return; }
    ctx->pc = 0x2046A8u;
    // 0x2046a8: 0xc080f32
    ctx->pc = 0x2046A8u;
    SET_GPR_U32(ctx, 31, 0x2046B0u);
    ctx->pc = 0x2046ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 28));
    ctx->pc = 0x203CC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_analog_dir_0x203cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2046B0u; }
    }
    if (ctx->pc != 0x2046B0u) { return; }
    ctx->pc = 0x2046B0u;
    // 0x2046b0: 0x40982d
    ctx->pc = 0x2046b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2046b4: 0xc080f32
    ctx->pc = 0x2046B4u;
    SET_GPR_U32(ctx, 31, 0x2046BCu);
    ctx->pc = 0x2046B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 30));
    ctx->pc = 0x203CC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_analog_dir_0x203cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2046BCu; }
    }
    if (ctx->pc != 0x2046BCu) { return; }
    ctx->pc = 0x2046BCu;
    // 0x2046bc: 0x40a02d
    ctx->pc = 0x2046bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2046c0: 0xc080f32
    ctx->pc = 0x2046C0u;
    SET_GPR_U32(ctx, 31, 0x2046C8u);
    ctx->pc = 0x2046C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x203CC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_analog_dir_0x203cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2046C8u; }
    }
    if (ctx->pc != 0x2046C8u) { return; }
    ctx->pc = 0x2046C8u;
    // 0x2046c8: 0x40a82d
    ctx->pc = 0x2046c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2046cc: 0xc080f32
    ctx->pc = 0x2046CCu;
    SET_GPR_U32(ctx, 31, 0x2046D4u);
    ctx->pc = 0x2046D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 34));
    ctx->pc = 0x203CC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_analog_dir_0x203cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2046D4u; }
    }
    if (ctx->pc != 0x2046D4u) { return; }
    ctx->pc = 0x2046D4u;
    // 0x2046d4: 0x8fa4006c
    ctx->pc = 0x2046d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2046d8: 0x3c060031
    ctx->pc = 0x2046d8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)49 << 16));
    // 0x2046dc: 0x24c61d40
    ctx->pc = 0x2046dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 7488));
    // 0x2046e0: 0x868821
    ctx->pc = 0x2046e0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2046e4: 0x3c030031
    ctx->pc = 0x2046e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2046e8: 0x24631d20
    ctx->pc = 0x2046e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7456));
    // 0x2046ec: 0x838021
    ctx->pc = 0x2046ecu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2046f0: 0x260202d
    ctx->pc = 0x2046f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2046f4: 0x280282d
    ctx->pc = 0x2046f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2046f8: 0x2a0302d
    ctx->pc = 0x2046f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2046fc: 0x40382d
    ctx->pc = 0x2046fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204700: 0x220402d
    ctx->pc = 0x204700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204704: 0xc080fd8
    ctx->pc = 0x204704u;
    SET_GPR_U32(ctx, 31, 0x20470Cu);
    ctx->pc = 0x204708u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_analog_stick_0x203f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20470Cu; }
    }
    if (ctx->pc != 0x20470Cu) { return; }
    ctx->pc = 0x20470Cu;
    // 0x20470c: 0x24020002
    ctx->pc = 0x20470cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x204710: 0x8fa30068
    ctx->pc = 0x204710u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x204714: 0x1462001e
    ctx->pc = 0x204714u;
    {
        const bool branch_taken_0x204714 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x204718u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x204714) {
            ctx->pc = 0x204790u;
            goto label_204790;
        }
    }
    ctx->pc = 0x20471Cu;
    // 0x20471c: 0xc6010000
    ctx->pc = 0x20471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204720: 0x44800000
    ctx->pc = 0x204720u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x204724: 0x46000832
    ctx->pc = 0x204724u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204728: 0x0
    ctx->pc = 0x204728u;
    // NOP
    // 0x20472c: 0x45010019
    ctx->pc = 0x20472Cu;
    {
        const bool branch_taken_0x20472c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x204730u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x20472c) {
            ctx->pc = 0x204794u;
            goto label_204794;
        }
    }
    ctx->pc = 0x204734u;
    // 0x204734: 0xe6410000
    ctx->pc = 0x204734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x204738: 0xc6200000
    ctx->pc = 0x204738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20473c: 0x8fa40084
    ctx->pc = 0x20473cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x204740: 0x10000012
    ctx->pc = 0x204740u;
    {
        const bool branch_taken_0x204740 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x204744u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x204740) {
            ctx->pc = 0x20478Cu;
            goto label_20478c;
        }
    }
    ctx->pc = 0x204748u;
label_204748:
    // 0x204748: 0x61880
    ctx->pc = 0x204748u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x20474c: 0x3c040031
    ctx->pc = 0x20474cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x204750: 0x24841d00
    ctx->pc = 0x204750u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7424));
    // 0x204754: 0x641021
    ctx->pc = 0x204754u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204758: 0xac400000
    ctx->pc = 0x204758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20475c: 0x3c060031
    ctx->pc = 0x20475cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)49 << 16));
    // 0x204760: 0x24c61ce0
    ctx->pc = 0x204760u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 7392));
    // 0x204764: 0x661021
    ctx->pc = 0x204764u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x204768: 0xac400000
    ctx->pc = 0x204768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20476c: 0x3c040031
    ctx->pc = 0x20476cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x204770: 0x24841d40
    ctx->pc = 0x204770u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7488));
    // 0x204774: 0x641021
    ctx->pc = 0x204774u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204778: 0xac400000
    ctx->pc = 0x204778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20477c: 0x3c020031
    ctx->pc = 0x20477cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x204780: 0x24421d20
    ctx->pc = 0x204780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7456));
    // 0x204784: 0x621821
    ctx->pc = 0x204784u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x204788: 0xac600000
    ctx->pc = 0x204788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20478c:
    // 0x20478c: 0x8fa60030
    ctx->pc = 0x20478cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_204790:
    // 0x204790: 0x24c60001
    ctx->pc = 0x204790u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_204794:
    // 0x204794: 0x28c20008
    ctx->pc = 0x204794u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 8));
    // 0x204798: 0x1440fe75
    ctx->pc = 0x204798u;
    {
        const bool branch_taken_0x204798 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20479Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
        if (branch_taken_0x204798) {
            ctx->pc = 0x204170u;
            goto label_204170;
        }
    }
    ctx->pc = 0x2047A0u;
    // 0x2047a0: 0x3c030031
    ctx->pc = 0x2047a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2047a4: 0x2402012b
    ctx->pc = 0x2047a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 299));
    // 0x2047a8: 0xac620f0c
    ctx->pc = 0x2047a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3852), GPR_U32(ctx, 2));
label_2047ac:
    // 0x2047ac: 0xdfbf0120
    ctx->pc = 0x2047acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_2047b0:
    // 0x2047b0: 0xdfbe0110
    ctx->pc = 0x2047b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2047b4:
    // 0x2047b4: 0xdfb70100
    ctx->pc = 0x2047b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2047b8: 0xdfb600f0
    ctx->pc = 0x2047b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2047bc: 0xdfb500e0
    ctx->pc = 0x2047bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2047c0: 0xdfb400d0
    ctx->pc = 0x2047c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2047c4: 0xdfb300c0
    ctx->pc = 0x2047c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2047c8: 0xdfb200b0
    ctx->pc = 0x2047c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2047cc: 0xdfb100a0
    ctx->pc = 0x2047ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2047d0: 0xdfb00090
    ctx->pc = 0x2047d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2047d4: 0x3e00008
    ctx->pc = 0x2047D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2047D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204170u: goto label_204170;
            case 0x2041E4u: goto label_2041e4;
            case 0x2041F8u: goto label_2041f8;
            case 0x204230u: goto label_204230;
            case 0x204248u: goto label_204248;
            case 0x204298u: goto label_204298;
            case 0x2042B0u: goto label_2042b0;
            case 0x2042CCu: goto label_2042cc;
            case 0x2042D0u: goto label_2042d0;
            case 0x2042F4u: goto label_2042f4;
            case 0x2042F8u: goto label_2042f8;
            case 0x2043D8u: goto label_2043d8;
            case 0x2043F8u: goto label_2043f8;
            case 0x20442Cu: goto label_20442c;
            case 0x20443Cu: goto label_20443c;
            case 0x204440u: goto label_204440;
            case 0x204748u: goto label_204748;
            case 0x20478Cu: goto label_20478c;
            case 0x204790u: goto label_204790;
            case 0x204794u: goto label_204794;
            case 0x2047ACu: goto label_2047ac;
            case 0x2047B0u: goto label_2047b0;
            case 0x2047B4u: goto label_2047b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2047DCu;
}
