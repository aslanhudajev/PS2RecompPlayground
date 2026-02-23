#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_CheckDelim
// Address: 0x185840 - 0x1858e8
void MPV_CheckDelim_0x185840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_CheckDelim");


    ctx->pc = 0x185840u;

    // 0x185840: 0x90870000
    ctx->pc = 0x185840u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x185844: 0x24060100
    ctx->pc = 0x185844u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x185848: 0x90820001
    ctx->pc = 0x185848u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x18584c: 0x73a00
    ctx->pc = 0x18584cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185850: 0x90830002
    ctx->pc = 0x185850u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x185854: 0xe23825
    ctx->pc = 0x185854u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x185858: 0x90850003
    ctx->pc = 0x185858u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x18585c: 0x73a00
    ctx->pc = 0x18585cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185860: 0xe33825
    ctx->pc = 0x185860u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x185864: 0x73a00
    ctx->pc = 0x185864u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185868: 0xe53825
    ctx->pc = 0x185868u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x18586c: 0x14e60003
    ctx->pc = 0x18586Cu;
    {
        const bool branch_taken_0x18586c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 6));
        ctx->pc = 0x185870u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
        if (branch_taken_0x18586c) {
            ctx->pc = 0x18587Cu;
            goto label_18587c;
        }
    }
    ctx->pc = 0x185874u;
    // 0x185874: 0x1000001a
    ctx->pc = 0x185874u;
    {
        const bool branch_taken_0x185874 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185878u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x185874) {
            ctx->pc = 0x1858E0u;
            goto label_1858e0;
        }
    }
    ctx->pc = 0x18587Cu;
label_18587c:
    // 0x18587c: 0x14e20003
    ctx->pc = 0x18587Cu;
    {
        const bool branch_taken_0x18587c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x185880u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294967038));
        if (branch_taken_0x18587c) {
            ctx->pc = 0x18588Cu;
            goto label_18588c;
        }
    }
    ctx->pc = 0x185884u;
    // 0x185884: 0x10000016
    ctx->pc = 0x185884u;
    {
        const bool branch_taken_0x185884 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185888u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x185884) {
            ctx->pc = 0x1858E0u;
            goto label_1858e0;
        }
    }
    ctx->pc = 0x18588Cu;
label_18588c:
    // 0x18588c: 0x2c4200ae
    ctx->pc = 0x18588cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 174));
    // 0x185890: 0x14400013
    ctx->pc = 0x185890u;
    {
        const bool branch_taken_0x185890 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185894u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x185890) {
            ctx->pc = 0x1858E0u;
            goto label_1858e0;
        }
    }
    ctx->pc = 0x185898u;
    // 0x185898: 0x240201b2
    ctx->pc = 0x185898u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 434));
    // 0x18589c: 0x14e20003
    ctx->pc = 0x18589Cu;
    {
        const bool branch_taken_0x18589c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x1858A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 435));
        if (branch_taken_0x18589c) {
            ctx->pc = 0x1858ACu;
            goto label_1858ac;
        }
    }
    ctx->pc = 0x1858A4u;
    // 0x1858a4: 0x1000000e
    ctx->pc = 0x1858A4u;
    {
        const bool branch_taken_0x1858a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1858A8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x1858a4) {
            ctx->pc = 0x1858E0u;
            goto label_1858e0;
        }
    }
    ctx->pc = 0x1858ACu;
label_1858ac:
    // 0x1858ac: 0x14e20003
    ctx->pc = 0x1858ACu;
    {
        const bool branch_taken_0x1858ac = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x1858B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 437));
        if (branch_taken_0x1858ac) {
            ctx->pc = 0x1858BCu;
            goto label_1858bc;
        }
    }
    ctx->pc = 0x1858B4u;
    // 0x1858b4: 0x1000000a
    ctx->pc = 0x1858B4u;
    {
        const bool branch_taken_0x1858b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1858B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x1858b4) {
            ctx->pc = 0x1858E0u;
            goto label_1858e0;
        }
    }
    ctx->pc = 0x1858BCu;
label_1858bc:
    // 0x1858bc: 0x14e20003
    ctx->pc = 0x1858BCu;
    {
        const bool branch_taken_0x1858bc = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x1858C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 439));
        if (branch_taken_0x1858bc) {
            ctx->pc = 0x1858CCu;
            goto label_1858cc;
        }
    }
    ctx->pc = 0x1858C4u;
    // 0x1858c4: 0x10000006
    ctx->pc = 0x1858C4u;
    {
        const bool branch_taken_0x1858c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1858C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x1858c4) {
            ctx->pc = 0x1858E0u;
            goto label_1858e0;
        }
    }
    ctx->pc = 0x1858CCu;
label_1858cc:
    // 0x1858cc: 0x10e20004
    ctx->pc = 0x1858CCu;
    {
        const bool branch_taken_0x1858cc = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        ctx->pc = 0x1858D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x1858cc) {
            ctx->pc = 0x1858E0u;
            goto label_1858e0;
        }
    }
    ctx->pc = 0x1858D4u;
    // 0x1858d4: 0x38e201b8
    ctx->pc = 0x1858d4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 7), 440));
    // 0x1858d8: 0x24030008
    ctx->pc = 0x1858d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1858dc: 0x2180b
    ctx->pc = 0x1858dcu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
label_1858e0:
    // 0x1858e0: 0x3e00008
    ctx->pc = 0x1858E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1858E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18587Cu: goto label_18587c;
            case 0x18588Cu: goto label_18588c;
            case 0x1858ACu: goto label_1858ac;
            case 0x1858BCu: goto label_1858bc;
            case 0x1858CCu: goto label_1858cc;
            case 0x1858E0u: goto label_1858e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1858E8u;
}
