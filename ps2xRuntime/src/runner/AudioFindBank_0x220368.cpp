#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioFindBank
// Address: 0x220368 - 0x220420
void AudioFindBank_0x220368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220368u;

    // 0x220368: 0x27bdff90
    ctx->pc = 0x220368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22036c: 0xffbf0060
    ctx->pc = 0x22036cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x220370: 0xffb50050
    ctx->pc = 0x220370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x220374: 0xffb40040
    ctx->pc = 0x220374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x220378: 0xffb30030
    ctx->pc = 0x220378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22037c: 0xffb20020
    ctx->pc = 0x22037cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x220380: 0xffb10010
    ctx->pc = 0x220380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x220384: 0xffb00000
    ctx->pc = 0x220384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220388: 0x80882d
    ctx->pc = 0x220388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22038c: 0xa0982d
    ctx->pc = 0x22038cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220390: 0x802d
    ctx->pc = 0x220390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220394: 0x3c150032
    ctx->pc = 0x220394u;
    SET_GPR_U32(ctx, 21, ((uint32_t)50 << 16));
    // 0x220398: 0x2632001c
    ctx->pc = 0x220398u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 28));
    // 0x22039c: 0x2414002c
    ctx->pc = 0x22039cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 44));
label_2203a0:
    // 0x2203a0: 0x8e220018
    ctx->pc = 0x2203a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2203a4: 0x202102a
    ctx->pc = 0x2203a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2203a8: 0x1040000d
    ctx->pc = 0x2203A8u;
    {
        const bool branch_taken_0x2203a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2203ACu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 4294966636)));
        if (branch_taken_0x2203a8) {
            ctx->pc = 0x2203E0u;
            goto label_2203e0;
        }
    }
    ctx->pc = 0x2203B0u;
    // 0x2203b0: 0x101080
    ctx->pc = 0x2203b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2203b4: 0x2421021
    ctx->pc = 0x2203b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2203b8: 0x8c440000
    ctx->pc = 0x2203b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2203bc: 0x942018
    ctx->pc = 0x2203bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2203c0: 0x8c620010
    ctx->pc = 0x2203c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2203c4: 0x822021
    ctx->pc = 0x2203c4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2203c8: 0x24840010
    ctx->pc = 0x2203c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x2203cc: 0x260282d
    ctx->pc = 0x2203ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203d0: 0xc0bf3c0
    ctx->pc = 0x2203D0u;
    SET_GPR_U32(ctx, 31, 0x2203D8u);
    ctx->pc = 0x2203D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2FCF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x2fcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2203D8u; }
    }
    if (ctx->pc != 0x2203D8u) { return; }
    ctx->pc = 0x2203D8u;
    // 0x2203d8: 0x5440fff1
    ctx->pc = 0x2203D8u;
    {
        const bool branch_taken_0x2203d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2203d8) {
            ctx->pc = 0x2203DCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2203A0u;
            goto label_2203a0;
        }
    }
    ctx->pc = 0x2203E0u;
label_2203e0:
    // 0x2203e0: 0x8e220018
    ctx->pc = 0x2203e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2203e4: 0x56020005
    ctx->pc = 0x2203E4u;
    {
        const bool branch_taken_0x2203e4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x2203e4) {
            ctx->pc = 0x2203E8u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2203FCu;
            goto label_2203fc;
        }
    }
    ctx->pc = 0x2203ECu;
    // 0x2203ec: 0x3c030032
    ctx->pc = 0x2203ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2203f0: 0x24020001
    ctx->pc = 0x2203f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2203f4: 0xac62fd58
    ctx->pc = 0x2203f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966616), GPR_U32(ctx, 2));
    // 0x2203f8: 0x2402ffff
    ctx->pc = 0x2203f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2203fc:
    // 0x2203fc: 0xdfbf0060
    ctx->pc = 0x2203fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x220400: 0xdfb50050
    ctx->pc = 0x220400u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x220404: 0xdfb40040
    ctx->pc = 0x220404u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220408: 0xdfb30030
    ctx->pc = 0x220408u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22040c: 0xdfb20020
    ctx->pc = 0x22040cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220410: 0xdfb10010
    ctx->pc = 0x220410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220414: 0xdfb00000
    ctx->pc = 0x220414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220418: 0x3e00008
    ctx->pc = 0x220418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22041Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2203A0u: goto label_2203a0;
            case 0x2203E0u: goto label_2203e0;
            case 0x2203FCu: goto label_2203fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220420u;
}
