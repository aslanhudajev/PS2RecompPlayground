#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AllocModel
// Address: 0x203548 - 0x2035c8
void AllocModel_0x203548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203548u;

    // 0x203548: 0x27bdffb0
    ctx->pc = 0x203548u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20354c: 0xffbf0040
    ctx->pc = 0x20354cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x203550: 0xffb30030
    ctx->pc = 0x203550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x203554: 0xffb20020
    ctx->pc = 0x203554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x203558: 0xffb10010
    ctx->pc = 0x203558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20355c: 0xffb00000
    ctx->pc = 0x20355cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203560: 0x80802d
    ctx->pc = 0x203560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203564: 0xc0b1ca6
    ctx->pc = 0x203564u;
    SET_GPR_U32(ctx, 31, 0x20356Cu);
    ctx->pc = 0x203568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C7298u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_AllocModel_0x2c7298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20356Cu; }
    }
    if (ctx->pc != 0x20356Cu) { return; }
    ctx->pc = 0x20356Cu;
    // 0x20356c: 0x1220000e
    ctx->pc = 0x20356Cu;
    {
        const bool branch_taken_0x20356c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x203570u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20356c) {
            ctx->pc = 0x2035A8u;
            goto label_2035a8;
        }
    }
    ctx->pc = 0x203574u;
    // 0x203574: 0x200202d
    ctx->pc = 0x203574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203578: 0x3c12003a
    ctx->pc = 0x203578u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x20357c: 0xc0b4eca
    ctx->pc = 0x20357Cu;
    SET_GPR_U32(ctx, 31, 0x203584u);
    ctx->pc = 0x203580u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 18656));
    ctx->pc = 0x2D3B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileExists_0x2d3b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203584u; }
    }
    if (ctx->pc != 0x203584u) { return; }
    ctx->pc = 0x203584u;
    // 0x203584: 0x10400007
    ctx->pc = 0x203584u;
    {
        const bool branch_taken_0x203584 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x203588u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x203584) {
            ctx->pc = 0x2035A4u;
            goto label_2035a4;
        }
    }
    ctx->pc = 0x20358Cu;
    // 0x20358c: 0xc0b4ed2
    ctx->pc = 0x20358Cu;
    SET_GPR_U32(ctx, 31, 0x203594u);
    ctx->pc = 0x203590u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 18656));
    ctx->pc = 0x2D3B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileSize_0x2d3b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203594u; }
    }
    if (ctx->pc != 0x203594u) { return; }
    ctx->pc = 0x203594u;
    // 0x203594: 0xc0b4f52
    ctx->pc = 0x203594u;
    SET_GPR_U32(ctx, 31, 0x20359Cu);
    ctx->pc = 0x203598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20359Cu; }
    }
    if (ctx->pc != 0x20359Cu) { return; }
    ctx->pc = 0x20359Cu;
    // 0x20359c: 0x10000002
    ctx->pc = 0x20359Cu;
    {
        const bool branch_taken_0x20359c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2035A0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x20359c) {
            ctx->pc = 0x2035A8u;
            goto label_2035a8;
        }
    }
    ctx->pc = 0x2035A4u;
label_2035a4:
    // 0x2035a4: 0xae200000
    ctx->pc = 0x2035a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2035a8:
    // 0x2035a8: 0x260102d
    ctx->pc = 0x2035a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035ac: 0xdfbf0040
    ctx->pc = 0x2035acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2035b0: 0xdfb30030
    ctx->pc = 0x2035b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2035b4: 0xdfb20020
    ctx->pc = 0x2035b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2035b8: 0xdfb10010
    ctx->pc = 0x2035b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2035bc: 0xdfb00000
    ctx->pc = 0x2035bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2035c0: 0x3e00008
    ctx->pc = 0x2035C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2035C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2035A4u: goto label_2035a4;
            case 0x2035A8u: goto label_2035a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2035C8u;
}
