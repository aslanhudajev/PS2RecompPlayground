#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetDebugNode
// Address: 0x2cb818 - 0x2cb90c
void MBPsysSetDebugNode_0x2cb818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cb818u;

    // 0x2cb818: 0x80402d
    ctx->pc = 0x2cb818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb81c: 0x11000030
    ctx->pc = 0x2CB81Cu;
    {
        const bool branch_taken_0x2cb81c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB820u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2cb81c) {
            ctx->pc = 0x2CB8E0u;
            goto label_2cb8e0;
        }
    }
    ctx->pc = 0x2CB824u;
    // 0x2cb824: 0x10a0001b
    ctx->pc = 0x2CB824u;
    {
        const bool branch_taken_0x2cb824 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB828u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cb824) {
            ctx->pc = 0x2CB894u;
            goto label_2cb894;
        }
    }
    ctx->pc = 0x2CB82Cu;
    // 0x2cb82c: 0x3c02003a
    ctx->pc = 0x2cb82cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cb830: 0x40182d
    ctx->pc = 0x2cb830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb834: 0x8c42b844
    ctx->pc = 0x2cb834u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948932)));
    // 0x2cb838: 0x18400013
    ctx->pc = 0x2CB838u;
    {
        const bool branch_taken_0x2cb838 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CB83Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cb838) {
            ctx->pc = 0x2CB888u;
            goto label_2cb888;
        }
    }
    ctx->pc = 0x2CB840u;
    // 0x2cb840: 0x3c02003d
    ctx->pc = 0x2cb840u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2cb844: 0x24471f98
    ctx->pc = 0x2cb844u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 8088));
    // 0x2cb848: 0x8c69b844
    ctx->pc = 0x2cb848u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 4294948932)));
    // 0x2cb84c: 0x0
    ctx->pc = 0x2cb84cu;
    // NOP
label_2cb850:
    // 0x2cb850: 0x52080
    ctx->pc = 0x2cb850u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2cb854: 0x872021
    ctx->pc = 0x2cb854u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2cb858: 0x61880
    ctx->pc = 0x2cb858u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x2cb85c: 0x671821
    ctx->pc = 0x2cb85cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2cb860: 0x8c620000
    ctx->pc = 0x2cb860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb864: 0xac820000
    ctx->pc = 0x2cb864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2cb868: 0x8c620000
    ctx->pc = 0x2cb868u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb86c: 0x24a3ffff
    ctx->pc = 0x2cb86cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2cb870: 0x481026
    ctx->pc = 0x2cb870u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2cb874: 0x62280a
    ctx->pc = 0x2cb874u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x2cb878: 0x24c60001
    ctx->pc = 0x2cb878u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cb87c: 0xc9102a
    ctx->pc = 0x2cb87cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 9)));
    // 0x2cb880: 0x1440fff3
    ctx->pc = 0x2CB880u;
    {
        const bool branch_taken_0x2cb880 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CB884u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2cb880) {
            ctx->pc = 0x2CB850u;
            goto label_2cb850;
        }
    }
    ctx->pc = 0x2CB888u;
label_2cb888:
    // 0x2cb888: 0x3c02003a
    ctx->pc = 0x2cb888u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cb88c: 0x10000014
    ctx->pc = 0x2CB88Cu;
    {
        const bool branch_taken_0x2cb88c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB890u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948932), GPR_U32(ctx, 5));
        if (branch_taken_0x2cb88c) {
            ctx->pc = 0x2CB8E0u;
            goto label_2cb8e0;
        }
    }
    ctx->pc = 0x2CB894u;
label_2cb894:
    // 0x2cb894: 0x8c42b844
    ctx->pc = 0x2cb894u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948932)));
    // 0x2cb898: 0x28420064
    ctx->pc = 0x2cb898u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 100));
    // 0x2cb89c: 0x14400004
    ctx->pc = 0x2CB89Cu;
    {
        const bool branch_taken_0x2cb89c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CB8A0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
        if (branch_taken_0x2cb89c) {
            ctx->pc = 0x2CB8B0u;
            goto label_2cb8b0;
        }
    }
    ctx->pc = 0x2CB8A4u;
    // 0x2cb8a4: 0x3c02003d
    ctx->pc = 0x2cb8a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2cb8a8: 0x10000009
    ctx->pc = 0x2CB8A8u;
    {
        const bool branch_taken_0x2cb8a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB8ACu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 8088), GPR_U32(ctx, 8));
        if (branch_taken_0x2cb8a8) {
            ctx->pc = 0x2CB8D0u;
            goto label_2cb8d0;
        }
    }
    ctx->pc = 0x2CB8B0u;
label_2cb8b0:
    // 0x2cb8b0: 0x24841f98
    ctx->pc = 0x2cb8b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8088));
    // 0x2cb8b4: 0x3c05003a
    ctx->pc = 0x2cb8b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2cb8b8: 0x8ca3b844
    ctx->pc = 0x2cb8b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294948932)));
    // 0x2cb8bc: 0x31080
    ctx->pc = 0x2cb8bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cb8c0: 0x441021
    ctx->pc = 0x2cb8c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cb8c4: 0xac480000
    ctx->pc = 0x2cb8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x2cb8c8: 0x24630001
    ctx->pc = 0x2cb8c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cb8cc: 0xaca3b844
    ctx->pc = 0x2cb8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294948932), GPR_U32(ctx, 3));
label_2cb8d0:
    // 0x2cb8d0: 0x3c03003a
    ctx->pc = 0x2cb8d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2cb8d4: 0x24020001
    ctx->pc = 0x2cb8d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb8d8: 0xac62aad4
    ctx->pc = 0x2cb8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945492), GPR_U32(ctx, 2));
    // 0x2cb8dc: 0x3c02003a
    ctx->pc = 0x2cb8dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2cb8e0:
    // 0x2cb8e0: 0x8c42b844
    ctx->pc = 0x2cb8e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948932)));
    // 0x2cb8e4: 0x18400007
    ctx->pc = 0x2CB8E4u;
    {
        const bool branch_taken_0x2cb8e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CB8E8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
        if (branch_taken_0x2cb8e4) {
            ctx->pc = 0x2CB904u;
            goto label_2cb904;
        }
    }
    ctx->pc = 0x2CB8ECu;
    // 0x2cb8ec: 0x24631f98
    ctx->pc = 0x2cb8ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8088));
    // 0x2cb8f0: 0x2442ffff
    ctx->pc = 0x2cb8f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2cb8f4: 0x21080
    ctx->pc = 0x2cb8f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cb8f8: 0x431021
    ctx->pc = 0x2cb8f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb8fc: 0x3e00008
    ctx->pc = 0x2CB8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB900u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CB850u: goto label_2cb850;
            case 0x2CB888u: goto label_2cb888;
            case 0x2CB894u: goto label_2cb894;
            case 0x2CB8B0u: goto label_2cb8b0;
            case 0x2CB8D0u: goto label_2cb8d0;
            case 0x2CB8E0u: goto label_2cb8e0;
            case 0x2CB904u: goto label_2cb904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CB904u;
label_2cb904:
    // 0x2cb904: 0x3e00008
    ctx->pc = 0x2CB904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB908u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CB850u: goto label_2cb850;
            case 0x2CB888u: goto label_2cb888;
            case 0x2CB894u: goto label_2cb894;
            case 0x2CB8B0u: goto label_2cb8b0;
            case 0x2CB8D0u: goto label_2cb8d0;
            case 0x2CB8E0u: goto label_2cb8e0;
            case 0x2CB904u: goto label_2cb904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CB90Cu;
}
