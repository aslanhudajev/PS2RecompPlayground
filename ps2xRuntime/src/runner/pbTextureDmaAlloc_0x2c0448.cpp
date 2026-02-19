#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbTextureDmaAlloc
// Address: 0x2c0448 - 0x2c04e8
void pbTextureDmaAlloc_0x2c0448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c0448u;

    // 0x2c0448: 0x27bdffd0
    ctx->pc = 0x2c0448u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c044c: 0xffbf0020
    ctx->pc = 0x2c044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c0450: 0xffb10010
    ctx->pc = 0x2c0450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c0454: 0xffb00000
    ctx->pc = 0x2c0454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c0458: 0x3c110037
    ctx->pc = 0x2c0458u;
    SET_GPR_U32(ctx, 17, ((uint32_t)55 << 16));
    // 0x2c045c: 0x8e222960
    ctx->pc = 0x2c045cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10592)));
    // 0x2c0460: 0x1440001c
    ctx->pc = 0x2C0460u;
    {
        const bool branch_taken_0x2c0460 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C0464u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c0460) {
            ctx->pc = 0x2C04D4u;
            goto label_2c04d4;
        }
    }
    ctx->pc = 0x2C0468u;
    // 0x2c0468: 0x3c030006
    ctx->pc = 0x2c0468u;
    SET_GPR_U32(ctx, 3, ((uint32_t)6 << 16));
    // 0x2c046c: 0x34634000
    ctx->pc = 0x2c046cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16384));
    // 0x2c0470: 0x2402ffff
    ctx->pc = 0x2c0470u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0474: 0x50102a
    ctx->pc = 0x2c0474u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x2c0478: 0x60802d
    ctx->pc = 0x2c0478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c047c: 0x82800b
    ctx->pc = 0x2c047cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 4));
    // 0x2c0480: 0xc0b4f52
    ctx->pc = 0x2C0480u;
    SET_GPR_U32(ctx, 31, 0x2C0488u);
    ctx->pc = 0x2C0484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0488u; }
    }
    if (ctx->pc != 0x2C0488u) { return; }
    ctx->pc = 0x2C0488u;
    // 0x2c0488: 0x3043007f
    ctx->pc = 0x2c0488u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 127));
    // 0x2c048c: 0x10600007
    ctx->pc = 0x2C048Cu;
    {
        const bool branch_taken_0x2c048c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0490u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 10592), GPR_U32(ctx, 2));
        if (branch_taken_0x2c048c) {
            ctx->pc = 0x2C04ACu;
            goto label_2c04ac;
        }
    }
    ctx->pc = 0x2C0494u;
    // 0x2c0494: 0x24040080
    ctx->pc = 0x2c0494u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c0498: 0x832023
    ctx->pc = 0x2c0498u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c049c: 0x441021
    ctx->pc = 0x2c049cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c04a0: 0x2048021
    ctx->pc = 0x2c04a0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2c04a4: 0xc0b4f52
    ctx->pc = 0x2C04A4u;
    SET_GPR_U32(ctx, 31, 0x2C04ACu);
    ctx->pc = 0x2C04A8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10592), GPR_U32(ctx, 2));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C04ACu; }
    }
    if (ctx->pc != 0x2C04ACu) { return; }
    ctx->pc = 0x2C04ACu;
label_2c04ac:
    // 0x2c04ac: 0x3c020037
    ctx->pc = 0x2c04acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c04b0: 0xac502964
    ctx->pc = 0x2c04b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10596), GPR_U32(ctx, 16));
    // 0x2c04b4: 0x3c020037
    ctx->pc = 0x2c04b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c04b8: 0xac402968
    ctx->pc = 0x2c04b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10600), GPR_U32(ctx, 0));
    // 0x2c04bc: 0x3c040037
    ctx->pc = 0x2c04bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2c04c0: 0x3c020037
    ctx->pc = 0x2c04c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c04c4: 0x8c432960
    ctx->pc = 0x2c04c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10592)));
    // 0x2c04c8: 0xac83295c
    ctx->pc = 0x2c04c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10588), GPR_U32(ctx, 3));
    // 0x2c04cc: 0x3c020037
    ctx->pc = 0x2c04ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c04d0: 0xac432990
    ctx->pc = 0x2c04d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10640), GPR_U32(ctx, 3));
label_2c04d4:
    // 0x2c04d4: 0xdfbf0020
    ctx->pc = 0x2c04d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c04d8: 0xdfb10010
    ctx->pc = 0x2c04d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c04dc: 0xdfb00000
    ctx->pc = 0x2c04dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c04e0: 0x3e00008
    ctx->pc = 0x2C04E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C04E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C04ACu: goto label_2c04ac;
            case 0x2C04D4u: goto label_2c04d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C04E8u;
}
