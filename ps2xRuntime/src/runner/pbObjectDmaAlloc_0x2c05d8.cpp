#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbObjectDmaAlloc
// Address: 0x2c05d8 - 0x2c0678
void pbObjectDmaAlloc_0x2c05d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c05d8u;

    // 0x2c05d8: 0x27bdffd0
    ctx->pc = 0x2c05d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c05dc: 0xffbf0020
    ctx->pc = 0x2c05dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c05e0: 0xffb10010
    ctx->pc = 0x2c05e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c05e4: 0xffb00000
    ctx->pc = 0x2c05e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c05e8: 0x3c110037
    ctx->pc = 0x2c05e8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)55 << 16));
    // 0x2c05ec: 0x8e222974
    ctx->pc = 0x2c05ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10612)));
    // 0x2c05f0: 0x1440001c
    ctx->pc = 0x2C05F0u;
    {
        const bool branch_taken_0x2c05f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C05F4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c05f0) {
            ctx->pc = 0x2C0664u;
            goto label_2c0664;
        }
    }
    ctx->pc = 0x2C05F8u;
    // 0x2c05f8: 0x3c030009
    ctx->pc = 0x2c05f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
    // 0x2c05fc: 0x34636000
    ctx->pc = 0x2c05fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 24576));
    // 0x2c0600: 0x2402ffff
    ctx->pc = 0x2c0600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0604: 0x50102a
    ctx->pc = 0x2c0604u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x2c0608: 0x60802d
    ctx->pc = 0x2c0608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c060c: 0x82800b
    ctx->pc = 0x2c060cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 4));
    // 0x2c0610: 0xc0b4f52
    ctx->pc = 0x2C0610u;
    SET_GPR_U32(ctx, 31, 0x2C0618u);
    ctx->pc = 0x2C0614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0618u; }
    }
    if (ctx->pc != 0x2C0618u) { return; }
    ctx->pc = 0x2C0618u;
    // 0x2c0618: 0x3043007f
    ctx->pc = 0x2c0618u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 127));
    // 0x2c061c: 0x10600007
    ctx->pc = 0x2C061Cu;
    {
        const bool branch_taken_0x2c061c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0620u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 10612), GPR_U32(ctx, 2));
        if (branch_taken_0x2c061c) {
            ctx->pc = 0x2C063Cu;
            goto label_2c063c;
        }
    }
    ctx->pc = 0x2C0624u;
    // 0x2c0624: 0x24040080
    ctx->pc = 0x2c0624u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c0628: 0x832023
    ctx->pc = 0x2c0628u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c062c: 0x441021
    ctx->pc = 0x2c062cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0630: 0x2048021
    ctx->pc = 0x2c0630u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2c0634: 0xc0b4f52
    ctx->pc = 0x2C0634u;
    SET_GPR_U32(ctx, 31, 0x2C063Cu);
    ctx->pc = 0x2C0638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10612), GPR_U32(ctx, 2));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C063Cu; }
    }
    if (ctx->pc != 0x2C063Cu) { return; }
    ctx->pc = 0x2C063Cu;
label_2c063c:
    // 0x2c063c: 0x3c040037
    ctx->pc = 0x2c063cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2c0640: 0x3c020037
    ctx->pc = 0x2c0640u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0644: 0x8c432974
    ctx->pc = 0x2c0644u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10612)));
    // 0x2c0648: 0xac832970
    ctx->pc = 0x2c0648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10608), GPR_U32(ctx, 3));
    // 0x2c064c: 0x3c020037
    ctx->pc = 0x2c064cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0650: 0xac432d90
    ctx->pc = 0x2c0650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11664), GPR_U32(ctx, 3));
    // 0x2c0654: 0x3c020037
    ctx->pc = 0x2c0654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0658: 0xac502978
    ctx->pc = 0x2c0658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10616), GPR_U32(ctx, 16));
    // 0x2c065c: 0x3c020037
    ctx->pc = 0x2c065cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0660: 0xac40297c
    ctx->pc = 0x2c0660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10620), GPR_U32(ctx, 0));
label_2c0664:
    // 0x2c0664: 0xdfbf0020
    ctx->pc = 0x2c0664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0668: 0xdfb10010
    ctx->pc = 0x2c0668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c066c: 0xdfb00000
    ctx->pc = 0x2c066cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0670: 0x3e00008
    ctx->pc = 0x2C0670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0674u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C063Cu: goto label_2c063c;
            case 0x2C0664u: goto label_2c0664;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C0678u;
}
