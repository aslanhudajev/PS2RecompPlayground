#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerCheckFloor
// Address: 0x245218 - 0x245290
void PlayerCheckFloor_0x245218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x245218u;

    // 0x245218: 0x27bdffe0
    ctx->pc = 0x245218u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24521c: 0xffbf0010
    ctx->pc = 0x24521cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x245220: 0xffb00000
    ctx->pc = 0x245220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245224: 0x80802d
    ctx->pc = 0x245224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245228: 0xc601082c
    ctx->pc = 0x245228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24522c: 0x3c014040
    ctx->pc = 0x24522cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x245230: 0x44810000
    ctx->pc = 0x245230u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x245234: 0x46000b80
    ctx->pc = 0x245234u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x245238: 0x3c020031
    ctx->pc = 0x245238u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x24523c: 0x8c430018
    ctx->pc = 0x24523cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x245240: 0x24024010
    ctx->pc = 0x245240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
    // 0x245244: 0x1462000c
    ctx->pc = 0x245244u;
    {
        const bool branch_taken_0x245244 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x245248u;
        ctx->f[14] = FPU_NEG_S(ctx->f[14]);
        if (branch_taken_0x245244) {
            ctx->pc = 0x245278u;
            goto label_245278;
        }
    }
    ctx->pc = 0x24524Cu;
    // 0x24524c: 0x26040050
    ctx->pc = 0x24524cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
    // 0x245250: 0x282d
    ctx->pc = 0x245250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245254: 0xc60c0828
    ctx->pc = 0x245254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x245258: 0x44806800
    ctx->pc = 0x245258u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x24525c: 0x24060001
    ctx->pc = 0x24525cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x245260: 0xc087b24
    ctx->pc = 0x245260u;
    SET_GPR_U32(ctx, 31, 0x245268u);
    ctx->pc = 0x245264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245268u; }
    }
    if (ctx->pc != 0x245268u) { return; }
    ctx->pc = 0x245268u;
    // 0x245268: 0xae02089c
    ctx->pc = 0x245268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2204), GPR_U32(ctx, 2));
    // 0x24526c: 0x9602093c
    ctx->pc = 0x24526cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2364)));
    // 0x245270: 0x34420001
    ctx->pc = 0x245270u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x245274: 0xa602093c
    ctx->pc = 0x245274u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2364), (uint16_t)GPR_U32(ctx, 2));
label_245278:
    // 0x245278: 0x8e02089c
    ctx->pc = 0x245278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2204)));
    // 0x24527c: 0x2102b
    ctx->pc = 0x24527cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x245280: 0xdfbf0010
    ctx->pc = 0x245280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245284: 0xdfb00000
    ctx->pc = 0x245284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245288: 0x3e00008
    ctx->pc = 0x245288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24528Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245278u: goto label_245278;
            default: break;
        }
        return;
    }
    ctx->pc = 0x245290u;
}
