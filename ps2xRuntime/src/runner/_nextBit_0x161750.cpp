#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _nextBit
// Address: 0x161750 - 0x1618b8
void _nextBit_0x161750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_nextBit");


    ctx->pc = 0x161750u;

    // 0x161750: 0x27bdffa0
    ctx->pc = 0x161750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x161754: 0x3c021000
    ctx->pc = 0x161754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x161758: 0xffb10010
    ctx->pc = 0x161758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16175c: 0x34422010
    ctx->pc = 0x16175cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x161760: 0xffbf0050
    ctx->pc = 0x161760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x161764: 0x3c058000
    ctx->pc = 0x161764u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x161768: 0xffb40040
    ctx->pc = 0x161768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x16176c: 0x34a54000
    ctx->pc = 0x16176cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16384));
    // 0x161770: 0xffb30030
    ctx->pc = 0x161770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x161774: 0x80882d
    ctx->pc = 0x161774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161778: 0xffb20020
    ctx->pc = 0x161778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16177c: 0x302d
    ctx->pc = 0x16177cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161780: 0xffb00000
    ctx->pc = 0x161780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161784: 0x8c430000
    ctx->pc = 0x161784u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161788: 0x3c028000
    ctx->pc = 0x161788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x16178c: 0x651824
    ctx->pc = 0x16178cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x161790: 0x14620018
    ctx->pc = 0x161790u;
    {
        const bool branch_taken_0x161790 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x161794u;
        SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
        if (branch_taken_0x161790) {
            ctx->pc = 0x1617F4u;
            goto label_1617f4;
        }
    }
    ctx->pc = 0x161798u;
    // 0x161798: 0x3c100023
    ctx->pc = 0x161798u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x16179c: 0x3c140023
    ctx->pc = 0x16179cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x1617a0: 0x3c120023
    ctx->pc = 0x1617a0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x1617a4: 0x0
    ctx->pc = 0x1617a4u;
    // NOP
label_1617a8:
    // 0x1617a8: 0xc0102d
    ctx->pc = 0x1617a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617ac: 0x28421389
    ctx->pc = 0x1617acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x1617b0: 0x14400005
    ctx->pc = 0x1617B0u;
    {
        const bool branch_taken_0x1617b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1617B4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x1617b0) {
            ctx->pc = 0x1617C8u;
            goto label_1617c8;
        }
    }
    ctx->pc = 0x1617B8u;
    // 0x1617b8: 0x3c020023
    ctx->pc = 0x1617b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1617bc: 0xc058f00
    ctx->pc = 0x1617BCu;
    SET_GPR_U32(ctx, 31, 0x1617C4u);
    ctx->pc = 0x1617C0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    ctx->pc = 0x163C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x163c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1617C4u; }
        else if (ctx->pc != 0x1617C4u) { ctx->pc = 0x1617C4u; }
    }
    if (ctx->pc != 0x1617C4u) { return; }
    ctx->pc = 0x1617C4u;
    // 0x1617c4: 0x302d
    ctx->pc = 0x1617c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1617c8:
    // 0x1617c8: 0x3c031000
    ctx->pc = 0x1617c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1617cc: 0x3c048000
    ctx->pc = 0x1617ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x1617d0: 0x34632010
    ctx->pc = 0x1617d0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x1617d4: 0x34844000
    ctx->pc = 0x1617d4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 16384));
    // 0x1617d8: 0x8c620000
    ctx->pc = 0x1617d8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1617dc: 0x3c058000
    ctx->pc = 0x1617dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x1617e0: 0x441024
    ctx->pc = 0x1617e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1617e4: 0x1045fff0
    ctx->pc = 0x1617E4u;
    {
        const bool branch_taken_0x1617e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x1617E8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294943332)));
        if (branch_taken_0x1617e4) {
            ctx->pc = 0x1617A8u;
            goto label_1617a8;
        }
    }
    ctx->pc = 0x1617ECu;
    // 0x1617ec: 0x10000005
    ctx->pc = 0x1617ECu;
    {
        const bool branch_taken_0x1617ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1617ec) {
            ctx->pc = 0x161804u;
            goto label_161804;
        }
    }
    ctx->pc = 0x1617F4u;
label_1617f4:
    // 0x1617f4: 0x3c100023
    ctx->pc = 0x1617f4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x1617f8: 0x3c140023
    ctx->pc = 0x1617f8u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x1617fc: 0x3c120023
    ctx->pc = 0x1617fcu;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x161800: 0x8e62a264
    ctx->pc = 0x161800u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294943332)));
label_161804:
    // 0x161804: 0x14400005
    ctx->pc = 0x161804u;
    {
        const bool branch_taken_0x161804 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161808u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x161804) {
            ctx->pc = 0x16181Cu;
            goto label_16181c;
        }
    }
    ctx->pc = 0x16180Cu;
    // 0x16180c: 0x8e02aadc
    ctx->pc = 0x16180cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294945500)));
    // 0x161810: 0x51102a
    ctx->pc = 0x161810u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
    // 0x161814: 0x1040000b
    ctx->pc = 0x161814u;
    {
        const bool branch_taken_0x161814 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x161818u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x161814) {
            ctx->pc = 0x161844u;
            goto label_161844;
        }
    }
    ctx->pc = 0x16181Cu;
label_16181c:
    // 0x16181c: 0x3c054000
    ctx->pc = 0x16181cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)16384 << 16));
    // 0x161820: 0x34422000
    ctx->pc = 0x161820u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x161824: 0x2684a148
    ctx->pc = 0x161824u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 4294943048));
    // 0x161828: 0xac450000
    ctx->pc = 0x161828u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x16182c: 0x8c830010
    ctx->pc = 0x16182cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x161830: 0xc0584a6
    ctx->pc = 0x161830u;
    SET_GPR_U32(ctx, 31, 0x161838u);
    ctx->pc = 0x161834u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294943332), GPR_U32(ctx, 3));
    ctx->pc = 0x161298u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x161298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161838u; }
        else if (ctx->pc != 0x161838u) { ctx->pc = 0x161838u; }
    }
    if (ctx->pc != 0x161838u) { return; }
    ctx->pc = 0x161838u;
    // 0x161838: 0x2103c
    ctx->pc = 0x161838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16183c: 0x2103f
    ctx->pc = 0x16183cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x161840: 0xae42aad8
    ctx->pc = 0x161840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294945496), GPR_U32(ctx, 2));
label_161844:
    // 0x161844: 0x24050020
    ctx->pc = 0x161844u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x161848: 0x3c044000
    ctx->pc = 0x161848u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16384 << 16));
    // 0x16184c: 0xae05aadc
    ctx->pc = 0x16184cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294945500), GPR_U32(ctx, 5));
    // 0x161850: 0x3c021000
    ctx->pc = 0x161850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x161854: 0x2242025
    ctx->pc = 0x161854u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x161858: 0x8e50aad8
    ctx->pc = 0x161858u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4294945496)));
    // 0x16185c: 0x34422000
    ctx->pc = 0x16185cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x161860: 0x41f02
    ctx->pc = 0x161860u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 28));
    // 0x161864: 0xac440000
    ctx->pc = 0x161864u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x161868: 0x31880
    ctx->pc = 0x161868u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x16186c: 0x2682a148
    ctx->pc = 0x16186cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4294943048));
    // 0x161870: 0xb12823
    ctx->pc = 0x161870u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x161874: 0x621821
    ctx->pc = 0x161874u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x161878: 0xb08006
    ctx->pc = 0x161878u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
    // 0x16187c: 0x8c620000
    ctx->pc = 0x16187cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161880: 0xc0584a6
    ctx->pc = 0x161880u;
    SET_GPR_U32(ctx, 31, 0x161888u);
    ctx->pc = 0x161884u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294943332), GPR_U32(ctx, 2));
    ctx->pc = 0x161298u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x161298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161888u; }
        else if (ctx->pc != 0x161888u) { ctx->pc = 0x161888u; }
    }
    if (ctx->pc != 0x161888u) { return; }
    ctx->pc = 0x161888u;
    // 0x161888: 0x2103c
    ctx->pc = 0x161888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16188c: 0x2103f
    ctx->pc = 0x16188cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x161890: 0xdfbf0050
    ctx->pc = 0x161890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161894: 0xae42aad8
    ctx->pc = 0x161894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294945496), GPR_U32(ctx, 2));
    // 0x161898: 0x200102d
    ctx->pc = 0x161898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16189c: 0xdfb40040
    ctx->pc = 0x16189cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1618a0: 0xdfb30030
    ctx->pc = 0x1618a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1618a4: 0xdfb20020
    ctx->pc = 0x1618a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1618a8: 0xdfb10010
    ctx->pc = 0x1618a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1618ac: 0xdfb00000
    ctx->pc = 0x1618acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1618b0: 0x3e00008
    ctx->pc = 0x1618B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1618B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1617A8u: goto label_1617a8;
            case 0x1617C8u: goto label_1617c8;
            case 0x1617F4u: goto label_1617f4;
            case 0x161804u: goto label_161804;
            case 0x16181Cu: goto label_16181c;
            case 0x161844u: goto label_161844;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1618B8u;
}
