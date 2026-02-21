#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: tally_generators
// Address: 0x227448 - 0x227528
void tally_generators_0x227448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x227448u;

    // 0x227448: 0x80282d
    ctx->pc = 0x227448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22744c: 0x3c03003c
    ctx->pc = 0x22744cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x227450: 0x24631878
    ctx->pc = 0x227450u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6264));
    // 0x227454: 0x8ca20000
    ctx->pc = 0x227454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x227458: 0x21080
    ctx->pc = 0x227458u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22745c: 0x431021
    ctx->pc = 0x22745cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227460: 0x8c460000
    ctx->pc = 0x227460u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227464: 0x3c020031
    ctx->pc = 0x227464u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x227468: 0x8c42ff9c
    ctx->pc = 0x227468u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x22746c: 0x14400020
    ctx->pc = 0x22746Cu;
    {
        const bool branch_taken_0x22746c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x227470u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x22746c) {
            ctx->pc = 0x2274F0u;
            goto label_2274f0;
        }
    }
    ctx->pc = 0x227474u;
    // 0x227474: 0x24631b90
    ctx->pc = 0x227474u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x227478: 0x8ca20000
    ctx->pc = 0x227478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22747c: 0x2404003c
    ctx->pc = 0x22747cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x227480: 0x441018
    ctx->pc = 0x227480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x227484: 0x621821
    ctx->pc = 0x227484u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227488: 0x8c620004
    ctx->pc = 0x227488u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22748c: 0x3c030f00
    ctx->pc = 0x22748cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)3840 << 16));
    // 0x227490: 0x431024
    ctx->pc = 0x227490u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227494: 0x10400002
    ctx->pc = 0x227494u;
    {
        const bool branch_taken_0x227494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x227498u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x227494) {
            ctx->pc = 0x2274A0u;
            goto label_2274a0;
        }
    }
    ctx->pc = 0x22749Cu;
    // 0x22749c: 0xc23018
    ctx->pc = 0x22749cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2274a0:
    // 0x2274a0: 0x3c04003c
    ctx->pc = 0x2274a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2274a4: 0x24841848
    ctx->pc = 0x2274a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6216));
    // 0x2274a8: 0x8ca30000
    ctx->pc = 0x2274a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2274ac: 0x31880
    ctx->pc = 0x2274acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2274b0: 0x641821
    ctx->pc = 0x2274b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2274b4: 0x8c620000
    ctx->pc = 0x2274b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2274b8: 0xc21021
    ctx->pc = 0x2274b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2274bc: 0xac620000
    ctx->pc = 0x2274bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2274c0: 0x8ca20000
    ctx->pc = 0x2274c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2274c4: 0x21080
    ctx->pc = 0x2274c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2274c8: 0x441021
    ctx->pc = 0x2274c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2274cc: 0x8ca3000c
    ctx->pc = 0x2274ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2274d0: 0x2404001c
    ctx->pc = 0x2274d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2274d4: 0x643018
    ctx->pc = 0x2274d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2274d8: 0xc51821
    ctx->pc = 0x2274d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2274dc: 0x8c420000
    ctx->pc = 0x2274dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2274e0: 0x8c630b3c
    ctx->pc = 0x2274e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 2876)));
    // 0x2274e4: 0x43102a
    ctx->pc = 0x2274e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2274e8: 0x10400003
    ctx->pc = 0x2274E8u;
    {
        const bool branch_taken_0x2274e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2274ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2274e8) {
            ctx->pc = 0x2274F8u;
            goto label_2274f8;
        }
    }
    ctx->pc = 0x2274F0u;
label_2274f0:
    // 0x2274f0: 0x3e00008
    ctx->pc = 0x2274F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2274F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2274A0u: goto label_2274a0;
            case 0x2274F0u: goto label_2274f0;
            case 0x2274F8u: goto label_2274f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2274F8u;
label_2274f8:
    // 0x2274f8: 0x24421848
    ctx->pc = 0x2274f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6216));
    // 0x2274fc: 0x8ca40000
    ctx->pc = 0x2274fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x227500: 0x42080
    ctx->pc = 0x227500u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x227504: 0x822021
    ctx->pc = 0x227504u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x227508: 0x8ca2000c
    ctx->pc = 0x227508u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22750c: 0x2403001c
    ctx->pc = 0x22750cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x227510: 0x433018
    ctx->pc = 0x227510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x227514: 0xc51021
    ctx->pc = 0x227514u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x227518: 0x8c420b3c
    ctx->pc = 0x227518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2876)));
    // 0x22751c: 0xac820000
    ctx->pc = 0x22751cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x227520: 0x3e00008
    ctx->pc = 0x227520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227524u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2274A0u: goto label_2274a0;
            case 0x2274F0u: goto label_2274f0;
            case 0x2274F8u: goto label_2274f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227528u;
}
