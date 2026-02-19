#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lf_bind
// Address: 0x3078e8 - 0x3079e8
void _lf_bind_0x3078e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3078e8u;

    // 0x3078e8: 0x27bdffb0
    ctx->pc = 0x3078e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3078ec: 0xffb20030
    ctx->pc = 0x3078ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3078f0: 0x3c12003a
    ctx->pc = 0x3078f0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x3078f4: 0xffbf0040
    ctx->pc = 0x3078f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3078f8: 0x8e424298
    ctx->pc = 0x3078f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 17048)));
    // 0x3078fc: 0xffb10020
    ctx->pc = 0x3078fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x307900: 0x4410032
    ctx->pc = 0x307900u;
    {
        const bool branch_taken_0x307900 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x307904u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        if (branch_taken_0x307900) {
            ctx->pc = 0x3079CCu;
            goto label_3079cc;
        }
    }
    ctx->pc = 0x307908u;
    // 0x307908: 0x3c11003e
    ctx->pc = 0x307908u;
    SET_GPR_U32(ctx, 17, ((uint32_t)62 << 16));
    // 0x30790c: 0x26306fc0
    ctx->pc = 0x30790cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 28608));
label_307910:
    // 0x307910: 0x3c058000
    ctx->pc = 0x307910u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x307914: 0x200202d
    ctx->pc = 0x307914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307918: 0x34a50006
    ctx->pc = 0x307918u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 6));
    // 0x30791c: 0xc0c1836
    ctx->pc = 0x30791Cu;
    SET_GPR_U32(ctx, 31, 0x307924u);
    ctx->pc = 0x307920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3060D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x3060d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307924u; }
    }
    if (ctx->pc != 0x307924u) { return; }
    ctx->pc = 0x307924u;
    // 0x307924: 0x4430003
    ctx->pc = 0x307924u;
    {
        const bool branch_taken_0x307924 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x307924) {
            ctx->pc = 0x307928u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x307934u;
            goto label_307934;
        }
    }
    ctx->pc = 0x30792Cu;
    // 0x30792c: 0x10000028
    ctx->pc = 0x30792Cu;
    {
        const bool branch_taken_0x30792c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x307930u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x30792c) {
            ctx->pc = 0x3079D0u;
            goto label_3079d0;
        }
    }
    ctx->pc = 0x307934u;
label_307934:
    // 0x307934: 0x10400019
    ctx->pc = 0x307934u;
    {
        const bool branch_taken_0x307934 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x307938u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x307934) {
            ctx->pc = 0x30799Cu;
            goto label_30799c;
        }
    }
    ctx->pc = 0x30793Cu;
    // 0x30793c: 0x3c11003e
    ctx->pc = 0x30793cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)62 << 16));
    // 0x307940: 0xae404298
    ctx->pc = 0x307940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17048), GPR_U32(ctx, 0));
    // 0x307944: 0xafa00000
    ctx->pc = 0x307944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x307948: 0x240500ff
    ctx->pc = 0x307948u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x30794c: 0x302d
    ctx->pc = 0x30794cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307950: 0x382d
    ctx->pc = 0x307950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307954: 0x402d
    ctx->pc = 0x307954u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307958: 0x26296dc0
    ctx->pc = 0x307958u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 17), 28096));
    // 0x30795c: 0x240a0004
    ctx->pc = 0x30795cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x307960: 0xc0c18aa
    ctx->pc = 0x307960u;
    SET_GPR_U32(ctx, 31, 0x307968u);
    ctx->pc = 0x307964u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3062A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x3062a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307968u; }
    }
    if (ctx->pc != 0x307968u) { return; }
    ctx->pc = 0x307968u;
    // 0x307968: 0x4410004
    ctx->pc = 0x307968u;
    {
        const bool branch_taken_0x307968 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30796Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)62 << 16));
        if (branch_taken_0x307968) {
            ctx->pc = 0x30797Cu;
            goto label_30797c;
        }
    }
    ctx->pc = 0x307970u;
    // 0x307970: 0x3c02fffe
    ctx->pc = 0x307970u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x307974: 0x10000016
    ctx->pc = 0x307974u;
    {
        const bool branch_taken_0x307974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x307978u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x307974) {
            ctx->pc = 0x3079D0u;
            goto label_3079d0;
        }
    }
    ctx->pc = 0x30797Cu;
label_30797c:
    // 0x30797c: 0x26276dc0
    ctx->pc = 0x30797cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 28096));
    // 0x307980: 0x24666fe8
    ctx->pc = 0x307980u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 28648));
    // 0x307984: 0x88e40003
    ctx->pc = 0x307984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x307988: 0x98e40000
    ctx->pc = 0x307988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x30798c: 0xa8c40003
    ctx->pc = 0x30798cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x307990: 0xb8c40000
    ctx->pc = 0x307990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x307994: 0x1000000e
    ctx->pc = 0x307994u;
    {
        const bool branch_taken_0x307994 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x307998u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x307994) {
            ctx->pc = 0x3079D0u;
            goto label_3079d0;
        }
    }
    ctx->pc = 0x30799Cu;
label_30799c:
    // 0x30799c: 0x3c020010
    ctx->pc = 0x30799cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x3079a0: 0x2403ffff
    ctx->pc = 0x3079a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3079a4: 0x0
    ctx->pc = 0x3079a4u;
    // NOP
label_3079a8:
    // 0x3079a8: 0x2442ffff
    ctx->pc = 0x3079a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3079ac: 0x0
    ctx->pc = 0x3079acu;
    // NOP
    // 0x3079b0: 0x0
    ctx->pc = 0x3079b0u;
    // NOP
    // 0x3079b4: 0x0
    ctx->pc = 0x3079b4u;
    // NOP
    // 0x3079b8: 0x0
    ctx->pc = 0x3079b8u;
    // NOP
    // 0x3079bc: 0x1443fffa
    ctx->pc = 0x3079BCu;
    {
        const bool branch_taken_0x3079bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x3079bc) {
            ctx->pc = 0x3079A8u;
            goto label_3079a8;
        }
    }
    ctx->pc = 0x3079C4u;
    // 0x3079c4: 0x1000ffd2
    ctx->pc = 0x3079C4u;
    {
        const bool branch_taken_0x3079c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3079C8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 28608));
        if (branch_taken_0x3079c4) {
            ctx->pc = 0x307910u;
            goto label_307910;
        }
    }
    ctx->pc = 0x3079CCu;
label_3079cc:
    // 0x3079cc: 0x102d
    ctx->pc = 0x3079ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3079d0:
    // 0x3079d0: 0xdfbf0040
    ctx->pc = 0x3079d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3079d4: 0xdfb20030
    ctx->pc = 0x3079d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3079d8: 0xdfb10020
    ctx->pc = 0x3079d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3079dc: 0xdfb00010
    ctx->pc = 0x3079dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3079e0: 0x3e00008
    ctx->pc = 0x3079E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3079E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x307910u: goto label_307910;
            case 0x307934u: goto label_307934;
            case 0x30797Cu: goto label_30797c;
            case 0x30799Cu: goto label_30799c;
            case 0x3079A8u: goto label_3079a8;
            case 0x3079CCu: goto label_3079cc;
            case 0x3079D0u: goto label_3079d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3079E8u;
}
