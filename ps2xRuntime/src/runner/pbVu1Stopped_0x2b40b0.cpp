#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVu1Stopped
// Address: 0x2b40b0 - 0x2b4150
void pbVu1Stopped_0x2b40b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b40b0u;

    // 0x2b40b0: 0x27bdffe0
    ctx->pc = 0x2b40b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b40b4: 0xffbf0010
    ctx->pc = 0x2b40b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b40b8: 0xffb00000
    ctx->pc = 0x2b40b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b40bc: 0x3c02ffff
    ctx->pc = 0x2b40bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2b40c0: 0x3442ffff
    ctx->pc = 0x2b40c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2b40c4: 0x14820008
    ctx->pc = 0x2B40C4u;
    {
        const bool branch_taken_0x2b40c4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B40C8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b40c4) {
            ctx->pc = 0x2B40E8u;
            goto label_2b40e8;
        }
    }
    ctx->pc = 0x2B40CCu;
    // 0x2b40cc: 0x202d
    ctx->pc = 0x2b40ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b40d0: 0x282d
    ctx->pc = 0x2b40d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b40d4: 0x302d
    ctx->pc = 0x2b40d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b40d8: 0x3c07003b
    ctx->pc = 0x2b40d8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
    // 0x2b40dc: 0xc0ad004
    ctx->pc = 0x2B40DCu;
    SET_GPR_U32(ctx, 31, 0x2B40E4u);
    ctx->pc = 0x2B40E0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 17864));
    ctx->pc = 0x2B4010u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDBGetVu1Info_0x2b4010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B40E4u; }
    }
    if (ctx->pc != 0x2B40E4u) { return; }
    ctx->pc = 0x2B40E4u;
    // 0x2b40e4: 0x8c440004
    ctx->pc = 0x2b40e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b40e8:
    // 0x2b40e8: 0x32020001
    ctx->pc = 0x2b40e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
    // 0x2b40ec: 0x10400003
    ctx->pc = 0x2B40ECu;
    {
        const bool branch_taken_0x2b40ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B40F0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 3840));
        if (branch_taken_0x2b40ec) {
            ctx->pc = 0x2B40FCu;
            goto label_2b40fc;
        }
    }
    ctx->pc = 0x2B40F4u;
    // 0x2b40f4: 0x10400012
    ctx->pc = 0x2B40F4u;
    {
        const bool branch_taken_0x2b40f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B40F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b40f4) {
            ctx->pc = 0x2B4140u;
            goto label_2b4140;
        }
    }
    ctx->pc = 0x2B40FCu;
label_2b40fc:
    // 0x2b40fc: 0x32020002
    ctx->pc = 0x2b40fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 2));
    // 0x2b4100: 0x10400005
    ctx->pc = 0x2B4100u;
    {
        const bool branch_taken_0x2b4100 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4104u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 512));
        if (branch_taken_0x2b4100) {
            ctx->pc = 0x2B4118u;
            goto label_2b4118;
        }
    }
    ctx->pc = 0x2B4108u;
    // 0x2b4108: 0x10400004
    ctx->pc = 0x2B4108u;
    {
        const bool branch_taken_0x2b4108 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B410Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x2b4108) {
            ctx->pc = 0x2B411Cu;
            goto label_2b411c;
        }
    }
    ctx->pc = 0x2B4110u;
    // 0x2b4110: 0x1000000b
    ctx->pc = 0x2B4110u;
    {
        const bool branch_taken_0x2b4110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4114u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b4110) {
            ctx->pc = 0x2B4140u;
            goto label_2b4140;
        }
    }
    ctx->pc = 0x2B4118u;
label_2b4118:
    // 0x2b4118: 0x32020004
    ctx->pc = 0x2b4118u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4));
label_2b411c:
    // 0x2b411c: 0x10400003
    ctx->pc = 0x2B411Cu;
    {
        const bool branch_taken_0x2b411c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4120u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1024));
        if (branch_taken_0x2b411c) {
            ctx->pc = 0x2B412Cu;
            goto label_2b412c;
        }
    }
    ctx->pc = 0x2B4124u;
    // 0x2b4124: 0x14400006
    ctx->pc = 0x2B4124u;
    {
        const bool branch_taken_0x2b4124 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B4128u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b4124) {
            ctx->pc = 0x2B4140u;
            goto label_2b4140;
        }
    }
    ctx->pc = 0x2B412Cu;
label_2b412c:
    // 0x2b412c: 0x32030008
    ctx->pc = 0x2b412cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 8));
    // 0x2b4130: 0x10600003
    ctx->pc = 0x2B4130u;
    {
        const bool branch_taken_0x2b4130 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4134u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b4130) {
            ctx->pc = 0x2B4140u;
            goto label_2b4140;
        }
    }
    ctx->pc = 0x2B4138u;
    // 0x2b4138: 0x30820800
    ctx->pc = 0x2b4138u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 2048));
    // 0x2b413c: 0x2102b
    ctx->pc = 0x2b413cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2b4140:
    // 0x2b4140: 0xdfbf0010
    ctx->pc = 0x2b4140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4144: 0xdfb00000
    ctx->pc = 0x2b4144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4148: 0x3e00008
    ctx->pc = 0x2B4148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B414Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B40E8u: goto label_2b40e8;
            case 0x2B40FCu: goto label_2b40fc;
            case 0x2B4118u: goto label_2b4118;
            case 0x2B411Cu: goto label_2b411c;
            case 0x2B412Cu: goto label_2b412c;
            case 0x2B4140u: goto label_2b4140;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4150u;
}
