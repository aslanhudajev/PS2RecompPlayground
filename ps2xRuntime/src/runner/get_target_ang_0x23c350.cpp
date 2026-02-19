#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_target_ang
// Address: 0x23c350 - 0x23c3bc
void get_target_ang_0x23c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23c350u;

    // 0x23c350: 0x27bdffe0
    ctx->pc = 0x23c350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c354: 0xffbf0010
    ctx->pc = 0x23c354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23c358: 0xffb00000
    ctx->pc = 0x23c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c35c: 0x80802d
    ctx->pc = 0x23c35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c360: 0x86020288
    ctx->pc = 0x23c360u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23c364: 0x4420011
    ctx->pc = 0x23C364u;
    {
        const bool branch_taken_0x23c364 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23c364) {
            ctx->pc = 0x23C368u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23C3ACu;
            goto label_23c3ac;
        }
    }
    ctx->pc = 0x23C36Cu;
    // 0x23c36c: 0x8e020380
    ctx->pc = 0x23c36cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x23c370: 0x8e03037c
    ctx->pc = 0x23c370u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x23c374: 0x43102a
    ctx->pc = 0x23c374u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x23c378: 0x50400003
    ctx->pc = 0x23C378u;
    {
        const bool branch_taken_0x23c378 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23c378) {
            ctx->pc = 0x23C37Cu;
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
            ctx->pc = 0x23C388u;
            goto label_23c388;
        }
    }
    ctx->pc = 0x23C380u;
    // 0x23c380: 0x1000000a
    ctx->pc = 0x23C380u;
    {
        const bool branch_taken_0x23c380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C384u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x23c380) {
            ctx->pc = 0x23C3ACu;
            goto label_23c3ac;
        }
    }
    ctx->pc = 0x23C388u;
label_23c388:
    // 0x23c388: 0x24022b00
    ctx->pc = 0x23c388u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x23c38c: 0x822018
    ctx->pc = 0x23c38cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23c390: 0x3c020032
    ctx->pc = 0x23c390u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23c394: 0x24421be0
    ctx->pc = 0x23c394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x23c398: 0x822021
    ctx->pc = 0x23c398u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23c39c: 0x24840030
    ctx->pc = 0x23c39cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 48));
    // 0x23c3a0: 0xc09a2aa
    ctx->pc = 0x23C3A0u;
    SET_GPR_U32(ctx, 31, 0x23C3A8u);
    ctx->pc = 0x23C3A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C3A8u; }
    }
    if (ctx->pc != 0x23C3A8u) { return; }
    ctx->pc = 0x23C3A8u;
    // 0x23c3a8: 0xe6000260
    ctx->pc = 0x23c3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
label_23c3ac:
    // 0x23c3ac: 0xdfbf0010
    ctx->pc = 0x23c3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c3b0: 0xdfb00000
    ctx->pc = 0x23c3b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c3b4: 0x3e00008
    ctx->pc = 0x23C3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C3B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C388u: goto label_23c388;
            case 0x23C3ACu: goto label_23c3ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C3BCu;
}
