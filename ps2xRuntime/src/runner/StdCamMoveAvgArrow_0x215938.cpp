#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StdCamMoveAvgArrow
// Address: 0x215938 - 0x215994
void StdCamMoveAvgArrow_0x215938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x215938u;

    // 0x215938: 0x27bdffd0
    ctx->pc = 0x215938u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21593c: 0xffbf0020
    ctx->pc = 0x21593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x215940: 0xffb10010
    ctx->pc = 0x215940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x215944: 0xffb00000
    ctx->pc = 0x215944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215948: 0x3c110032
    ctx->pc = 0x215948u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x21594c: 0x8e25f7c8
    ctx->pc = 0x21594cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4294965192)));
    // 0x215950: 0x10a0000b
    ctx->pc = 0x215950u;
    {
        const bool branch_taken_0x215950 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x215954u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x215950) {
            ctx->pc = 0x215980u;
            goto label_215980;
        }
    }
    ctx->pc = 0x215958u;
    // 0x215958: 0x3c04003a
    ctx->pc = 0x215958u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x21595c: 0xc0b5494
    ctx->pc = 0x21595Cu;
    SET_GPR_U32(ctx, 31, 0x215964u);
    ctx->pc = 0x215960u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215964u; }
    }
    if (ctx->pc != 0x215964u) { return; }
    ctx->pc = 0x215964u;
    // 0x215964: 0x8e22f7c8
    ctx->pc = 0x215964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294965192)));
    // 0x215968: 0xc6000000
    ctx->pc = 0x215968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21596c: 0xe4400030
    ctx->pc = 0x21596cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x215970: 0xc6000004
    ctx->pc = 0x215970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215974: 0xe4400034
    ctx->pc = 0x215974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x215978: 0xc6000008
    ctx->pc = 0x215978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21597c: 0xe4400038
    ctx->pc = 0x21597cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_215980:
    // 0x215980: 0xdfbf0020
    ctx->pc = 0x215980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215984: 0xdfb10010
    ctx->pc = 0x215984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215988: 0xdfb00000
    ctx->pc = 0x215988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21598c: 0x3e00008
    ctx->pc = 0x21598Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215990u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215980u: goto label_215980;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215994u;
}
