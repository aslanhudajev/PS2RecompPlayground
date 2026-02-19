#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeNodeInsert
// Address: 0x2119b8 - 0x211a14
void AtreeNodeInsert_0x2119b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2119b8u;

    // 0x2119b8: 0x27bdffe0
    ctx->pc = 0x2119b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2119bc: 0xffbf0010
    ctx->pc = 0x2119bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2119c0: 0xffb00000
    ctx->pc = 0x2119c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2119c4: 0x80802d
    ctx->pc = 0x2119c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2119c8: 0xc0202d
    ctx->pc = 0x2119c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2119cc: 0x14a00005
    ctx->pc = 0x2119CCu;
    {
        const bool branch_taken_0x2119cc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x2119D0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x2119cc) {
            ctx->pc = 0x2119E4u;
            goto label_2119e4;
        }
    }
    ctx->pc = 0x2119D4u;
    // 0x2119d4: 0x1080000c
    ctx->pc = 0x2119D4u;
    {
        const bool branch_taken_0x2119d4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2119D8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2119d4) {
            ctx->pc = 0x211A08u;
            goto label_211a08;
        }
    }
    ctx->pc = 0x2119DCu;
    // 0x2119dc: 0x10000006
    ctx->pc = 0x2119DCu;
    {
        const bool branch_taken_0x2119dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2119dc) {
            ctx->pc = 0x2119F8u;
            goto label_2119f8;
        }
    }
    ctx->pc = 0x2119E4u;
label_2119e4:
    // 0x2119e4: 0x8ca40008
    ctx->pc = 0x2119e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2119e8: 0x14800003
    ctx->pc = 0x2119E8u;
    {
        const bool branch_taken_0x2119e8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2119e8) {
            ctx->pc = 0x2119F8u;
            goto label_2119f8;
        }
    }
    ctx->pc = 0x2119F0u;
    // 0x2119f0: 0x10000004
    ctx->pc = 0x2119F0u;
    {
        const bool branch_taken_0x2119f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2119F4u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 16));
        if (branch_taken_0x2119f0) {
            ctx->pc = 0x211A04u;
            goto label_211a04;
        }
    }
    ctx->pc = 0x2119F8u;
label_2119f8:
    // 0x2119f8: 0xc08465e
    ctx->pc = 0x2119F8u;
    SET_GPR_U32(ctx, 31, 0x211A00u);
    ctx->pc = 0x211978u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeNodeLastSibling_0x211978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211A00u; }
    }
    if (ctx->pc != 0x211A00u) { return; }
    ctx->pc = 0x211A00u;
    // 0x211a00: 0xac50000c
    ctx->pc = 0x211a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
label_211a04:
    // 0x211a04: 0xdfbf0010
    ctx->pc = 0x211a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_211a08:
    // 0x211a08: 0xdfb00000
    ctx->pc = 0x211a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211a0c: 0x3e00008
    ctx->pc = 0x211A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211A10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2119E4u: goto label_2119e4;
            case 0x2119F8u: goto label_2119f8;
            case 0x211A04u: goto label_211a04;
            case 0x211A08u: goto label_211a08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211A14u;
}
