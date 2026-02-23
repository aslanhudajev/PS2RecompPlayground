#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJMEM_IsGetChunk
// Address: 0x17c368 - 0x17c400
void SJMEM_IsGetChunk_0x17c368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJMEM_IsGetChunk");


    ctx->pc = 0x17c368u;

label_17c368:
    // 0x17c368: 0x27bdffb0
    ctx->pc = 0x17c368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_17c36c:
    // 0x17c36c: 0xffb30030
    ctx->pc = 0x17c36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_17c370:
    // 0x17c370: 0xffb20020
    ctx->pc = 0x17c370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17c374:
    // 0x17c374: 0xe0982d
    ctx->pc = 0x17c374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17c378:
    // 0x17c378: 0xffb10010
    ctx->pc = 0x17c378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17c37c:
    // 0x17c37c: 0xc0902d
    ctx->pc = 0x17c37cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17c380:
    // 0x17c380: 0xffb00000
    ctx->pc = 0x17c380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17c384:
    // 0x17c384: 0xa0882d
    ctx->pc = 0x17c384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17c388:
    // 0x17c388: 0xffbf0040
    ctx->pc = 0x17c388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17c38c:
    // 0x17c38c: 0xc05efbc
label_17c390:
    if (ctx->pc == 0x17C390u) {
        ctx->pc = 0x17C390u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C394u;
        goto label_17c394;
    }
    ctx->pc = 0x17C38Cu;
    SET_GPR_U32(ctx, 31, 0x17C394u);
    ctx->pc = 0x17C390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C394u; }
        else if (ctx->pc != 0x17C394u) { ctx->pc = 0x17C394u; }
    }
    if (ctx->pc != 0x17C394u) { return; }
    ctx->pc = 0x17C394u;
label_17c394:
    // 0x17c394: 0x16200003
label_17c398:
    if (ctx->pc == 0x17C398u) {
        ctx->pc = 0x17C398u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17C39Cu;
        goto label_17c39c;
    }
    ctx->pc = 0x17C394u;
    {
        const bool branch_taken_0x17c394 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x17C398u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17c394) {
            ctx->pc = 0x17C3A4u;
            goto label_17c3a4;
        }
    }
    ctx->pc = 0x17C39Cu;
label_17c39c:
    // 0x17c39c: 0x1000000d
label_17c3a0:
    if (ctx->pc == 0x17C3A0u) {
        ctx->pc = 0x17C3A0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C3A4u;
        goto label_17c3a4;
    }
    ctx->pc = 0x17C39Cu;
    {
        const bool branch_taken_0x17c39c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C3A0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c39c) {
            ctx->pc = 0x17C3D4u;
            goto label_17c3d4;
        }
    }
    ctx->pc = 0x17C3A4u;
label_17c3a4:
    // 0x17c3a4: 0x56220006
label_17c3a8:
    if (ctx->pc == 0x17C3A8u) {
        ctx->pc = 0x17C3A8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x17C3ACu;
        goto label_17c3ac;
    }
    ctx->pc = 0x17C3A4u;
    {
        const bool branch_taken_0x17c3a4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x17c3a4) {
            ctx->pc = 0x17C3A8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->pc = 0x17C3C0u;
            goto label_17c3c0;
        }
    }
    ctx->pc = 0x17C3ACu;
label_17c3ac:
    // 0x17c3ac: 0x8e03000c
    ctx->pc = 0x17c3acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17c3b0:
    // 0x17c3b0: 0x72102a
    ctx->pc = 0x17c3b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 18)));
label_17c3b4:
    // 0x17c3b4: 0x60882d
    ctx->pc = 0x17c3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17c3b8:
    // 0x17c3b8: 0x10000006
label_17c3bc:
    if (ctx->pc == 0x17C3BCu) {
        ctx->pc = 0x17C3BCu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 18));
        ctx->pc = 0x17C3C0u;
        goto label_17c3c0;
    }
    ctx->pc = 0x17C3B8u;
    {
        const bool branch_taken_0x17c3b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C3BCu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 18));
        if (branch_taken_0x17c3b8) {
            ctx->pc = 0x17C3D4u;
            goto label_17c3d4;
        }
    }
    ctx->pc = 0x17C3C0u;
label_17c3c0:
    // 0x17c3c0: 0x10400004
label_17c3c4:
    if (ctx->pc == 0x17C3C4u) {
        ctx->pc = 0x17C3C4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C3C8u;
        goto label_17c3c8;
    }
    ctx->pc = 0x17C3C0u;
    {
        const bool branch_taken_0x17c3c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C3C4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c3c0) {
            ctx->pc = 0x17C3D4u;
            goto label_17c3d4;
        }
    }
    ctx->pc = 0x17C3C8u;
label_17c3c8:
    // 0x17c3c8: 0x8e040020
    ctx->pc = 0x17c3c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_17c3cc:
    // 0x17c3cc: 0x40f809
label_17c3d0:
    if (ctx->pc == 0x17C3D0u) {
        ctx->pc = 0x17C3D0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17C3D4u;
        goto label_17c3d4;
    }
    ctx->pc = 0x17C3CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17C3D4u);
        ctx->pc = 0x17C3D0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C368u: goto label_17c368;
            case 0x17C36Cu: goto label_17c36c;
            case 0x17C370u: goto label_17c370;
            case 0x17C374u: goto label_17c374;
            case 0x17C378u: goto label_17c378;
            case 0x17C37Cu: goto label_17c37c;
            case 0x17C380u: goto label_17c380;
            case 0x17C384u: goto label_17c384;
            case 0x17C388u: goto label_17c388;
            case 0x17C38Cu: goto label_17c38c;
            case 0x17C390u: goto label_17c390;
            case 0x17C394u: goto label_17c394;
            case 0x17C398u: goto label_17c398;
            case 0x17C39Cu: goto label_17c39c;
            case 0x17C3A0u: goto label_17c3a0;
            case 0x17C3A4u: goto label_17c3a4;
            case 0x17C3A8u: goto label_17c3a8;
            case 0x17C3ACu: goto label_17c3ac;
            case 0x17C3B0u: goto label_17c3b0;
            case 0x17C3B4u: goto label_17c3b4;
            case 0x17C3B8u: goto label_17c3b8;
            case 0x17C3BCu: goto label_17c3bc;
            case 0x17C3C0u: goto label_17c3c0;
            case 0x17C3C4u: goto label_17c3c4;
            case 0x17C3C8u: goto label_17c3c8;
            case 0x17C3CCu: goto label_17c3cc;
            case 0x17C3D0u: goto label_17c3d0;
            case 0x17C3D4u: goto label_17c3d4;
            case 0x17C3D8u: goto label_17c3d8;
            case 0x17C3DCu: goto label_17c3dc;
            case 0x17C3E0u: goto label_17c3e0;
            case 0x17C3E4u: goto label_17c3e4;
            case 0x17C3E8u: goto label_17c3e8;
            case 0x17C3ECu: goto label_17c3ec;
            case 0x17C3F0u: goto label_17c3f0;
            case 0x17C3F4u: goto label_17c3f4;
            case 0x17C3F8u: goto label_17c3f8;
            case 0x17C3FCu: goto label_17c3fc;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C3D4u; }
            if (ctx->pc != 0x17C3D4u) { return; }
        }
    }
    ctx->pc = 0x17C3D4u;
label_17c3d4:
    // 0x17c3d4: 0xc05efc2
label_17c3d8:
    if (ctx->pc == 0x17C3D8u) {
        ctx->pc = 0x17C3D8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->pc = 0x17C3DCu;
        goto label_17c3dc;
    }
    ctx->pc = 0x17C3D4u;
    SET_GPR_U32(ctx, 31, 0x17C3DCu);
    ctx->pc = 0x17C3D8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x17BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Unlock_0x17bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3DCu; }
        else if (ctx->pc != 0x17C3DCu) { ctx->pc = 0x17C3DCu; }
    }
    if (ctx->pc != 0x17C3DCu) { return; }
    ctx->pc = 0x17C3DCu;
label_17c3dc:
    // 0x17c3dc: 0x2321026
    ctx->pc = 0x17c3dcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_17c3e0:
    // 0x17c3e0: 0xdfbf0040
    ctx->pc = 0x17c3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17c3e4:
    // 0x17c3e4: 0xdfb30030
    ctx->pc = 0x17c3e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17c3e8:
    // 0x17c3e8: 0x2c420001
    ctx->pc = 0x17c3e8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_17c3ec:
    // 0x17c3ec: 0xdfb20020
    ctx->pc = 0x17c3ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17c3f0:
    // 0x17c3f0: 0xdfb10010
    ctx->pc = 0x17c3f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c3f4:
    // 0x17c3f4: 0xdfb00000
    ctx->pc = 0x17c3f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c3f8:
    // 0x17c3f8: 0x3e00008
label_17c3fc:
    if (ctx->pc == 0x17C3FCu) {
        ctx->pc = 0x17C3FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x17C400u;
        goto label_fallthrough_0x17c3f8;
    }
    ctx->pc = 0x17C3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C3FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C368u: goto label_17c368;
            case 0x17C36Cu: goto label_17c36c;
            case 0x17C370u: goto label_17c370;
            case 0x17C374u: goto label_17c374;
            case 0x17C378u: goto label_17c378;
            case 0x17C37Cu: goto label_17c37c;
            case 0x17C380u: goto label_17c380;
            case 0x17C384u: goto label_17c384;
            case 0x17C388u: goto label_17c388;
            case 0x17C38Cu: goto label_17c38c;
            case 0x17C390u: goto label_17c390;
            case 0x17C394u: goto label_17c394;
            case 0x17C398u: goto label_17c398;
            case 0x17C39Cu: goto label_17c39c;
            case 0x17C3A0u: goto label_17c3a0;
            case 0x17C3A4u: goto label_17c3a4;
            case 0x17C3A8u: goto label_17c3a8;
            case 0x17C3ACu: goto label_17c3ac;
            case 0x17C3B0u: goto label_17c3b0;
            case 0x17C3B4u: goto label_17c3b4;
            case 0x17C3B8u: goto label_17c3b8;
            case 0x17C3BCu: goto label_17c3bc;
            case 0x17C3C0u: goto label_17c3c0;
            case 0x17C3C4u: goto label_17c3c4;
            case 0x17C3C8u: goto label_17c3c8;
            case 0x17C3CCu: goto label_17c3cc;
            case 0x17C3D0u: goto label_17c3d0;
            case 0x17C3D4u: goto label_17c3d4;
            case 0x17C3D8u: goto label_17c3d8;
            case 0x17C3DCu: goto label_17c3dc;
            case 0x17C3E0u: goto label_17c3e0;
            case 0x17C3E4u: goto label_17c3e4;
            case 0x17C3E8u: goto label_17c3e8;
            case 0x17C3ECu: goto label_17c3ec;
            case 0x17C3F0u: goto label_17c3f0;
            case 0x17C3F4u: goto label_17c3f4;
            case 0x17C3F8u: goto label_17c3f8;
            case 0x17C3FCu: goto label_17c3fc;
            default: break;
        }
        return;
    }
label_fallthrough_0x17c3f8:
    ctx->pc = 0x17C400u;
}
