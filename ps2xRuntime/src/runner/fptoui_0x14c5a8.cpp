#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: fptoui
// Address: 0x14c5a8 - 0x14c640
void fptoui_0x14c5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("fptoui");


    ctx->pc = 0x14c5a8u;

    // 0x14c5a8: 0x27bdffd0
    ctx->pc = 0x14c5a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c5ac: 0xffbf0020
    ctx->pc = 0x14c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14c5b0: 0x27a40010
    ctx->pc = 0x14c5b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x14c5b4: 0xe7ac0010
    ctx->pc = 0x14c5b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14c5b8: 0xc052f06
    ctx->pc = 0x14C5B8u;
    SET_GPR_U32(ctx, 31, 0x14C5C0u);
    ctx->pc = 0x14C5BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x14bc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5C0u; }
        else if (ctx->pc != 0x14C5C0u) { ctx->pc = 0x14C5C0u; }
    }
    if (ctx->pc != 0x14C5C0u) { return; }
    ctx->pc = 0x14C5C0u;
    // 0x14c5c0: 0x8fa30000
    ctx->pc = 0x14c5c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c5c4: 0x38620002
    ctx->pc = 0x14c5c4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x14c5c8: 0x10400003
    ctx->pc = 0x14C5C8u;
    {
        const bool branch_taken_0x14c5c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C5CCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x14c5c8) {
            ctx->pc = 0x14C5D8u;
            goto label_14c5d8;
        }
    }
    ctx->pc = 0x14C5D0u;
    // 0x14c5d0: 0x10400003
    ctx->pc = 0x14C5D0u;
    {
        const bool branch_taken_0x14c5d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C5D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x14c5d0) {
            ctx->pc = 0x14C5E0u;
            goto label_14c5e0;
        }
    }
    ctx->pc = 0x14C5D8u;
label_14c5d8:
    // 0x14c5d8: 0x10000016
    ctx->pc = 0x14C5D8u;
    {
        const bool branch_taken_0x14c5d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C5DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c5d8) {
            ctx->pc = 0x14C634u;
            goto label_14c634;
        }
    }
    ctx->pc = 0x14C5E0u;
label_14c5e0:
    // 0x14c5e0: 0x14400014
    ctx->pc = 0x14C5E0u;
    {
        const bool branch_taken_0x14c5e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C5E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c5e0) {
            ctx->pc = 0x14C634u;
            goto label_14c634;
        }
    }
    ctx->pc = 0x14C5E8u;
    // 0x14c5e8: 0x38620004
    ctx->pc = 0x14c5e8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
    // 0x14c5ec: 0x10400005
    ctx->pc = 0x14C5ECu;
    {
        const bool branch_taken_0x14c5ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C5F0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x14c5ec) {
            ctx->pc = 0x14C604u;
            goto label_14c604;
        }
    }
    ctx->pc = 0x14C5F4u;
    // 0x14c5f4: 0x480fff8
    ctx->pc = 0x14C5F4u;
    {
        const bool branch_taken_0x14c5f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x14C5F8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 32));
        if (branch_taken_0x14c5f4) {
            ctx->pc = 0x14C5D8u;
            goto label_14c5d8;
        }
    }
    ctx->pc = 0x14C5FCu;
    // 0x14c5fc: 0x54400004
    ctx->pc = 0x14C5FCu;
    {
        const bool branch_taken_0x14c5fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x14c5fc) {
            ctx->pc = 0x14C600u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 31));
            ctx->pc = 0x14C610u;
            goto label_14c610;
        }
    }
    ctx->pc = 0x14C604u;
label_14c604:
    // 0x14c604: 0x3c02ffff
    ctx->pc = 0x14c604u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x14c608: 0x1000000a
    ctx->pc = 0x14C608u;
    {
        const bool branch_taken_0x14c608 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C60Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x14c608) {
            ctx->pc = 0x14C634u;
            goto label_14c634;
        }
    }
    ctx->pc = 0x14C610u;
label_14c610:
    // 0x14c610: 0x54400005
    ctx->pc = 0x14C610u;
    {
        const bool branch_taken_0x14c610 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x14c610) {
            ctx->pc = 0x14C614u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
            ctx->pc = 0x14C628u;
            goto label_14c628;
        }
    }
    ctx->pc = 0x14C618u;
    // 0x14c618: 0x8fa3000c
    ctx->pc = 0x14c618u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x14c61c: 0x2482ffe2
    ctx->pc = 0x14c61cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x14c620: 0x10000004
    ctx->pc = 0x14C620u;
    {
        const bool branch_taken_0x14c620 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C624u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        if (branch_taken_0x14c620) {
            ctx->pc = 0x14C634u;
            goto label_14c634;
        }
    }
    ctx->pc = 0x14C628u;
label_14c628:
    // 0x14c628: 0x8fa3000c
    ctx->pc = 0x14c628u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x14c62c: 0x441023
    ctx->pc = 0x14c62cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14c630: 0x431006
    ctx->pc = 0x14c630u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_14c634:
    // 0x14c634: 0xdfbf0020
    ctx->pc = 0x14c634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c638: 0x3e00008
    ctx->pc = 0x14C638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C63Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C5D8u: goto label_14c5d8;
            case 0x14C5E0u: goto label_14c5e0;
            case 0x14C604u: goto label_14c604;
            case 0x14C610u: goto label_14c610;
            case 0x14C628u: goto label_14c628;
            case 0x14C634u: goto label_14c634;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C640u;
}
