#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getNewPosFrame
// Address: 0x2cd400 - 0x2cd490
void getNewPosFrame_0x2cd400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cd400u;

    // 0x2cd400: 0x27bdffc0
    ctx->pc = 0x2cd400u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cd404: 0xffbf0030
    ctx->pc = 0x2cd404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cd408: 0xffb20020
    ctx->pc = 0x2cd408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cd40c: 0xffb10010
    ctx->pc = 0x2cd40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cd410: 0xffb00000
    ctx->pc = 0x2cd410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cd414: 0x80802d
    ctx->pc = 0x2cd414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd418: 0x3c02003a
    ctx->pc = 0x2cd418u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cd41c: 0x2452aa38
    ctx->pc = 0x2cd41cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294945336));
    // 0x2cd420: 0x86460056
    ctx->pc = 0x2cd420u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 86)));
    // 0x2cd424: 0x4c10013
    ctx->pc = 0x2CD424u;
    {
        const bool branch_taken_0x2cd424 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2CD428u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cd424) {
            ctx->pc = 0x2CD474u;
            goto label_2cd474;
        }
    }
    ctx->pc = 0x2CD42Cu;
    // 0x2cd42c: 0x96040032
    ctx->pc = 0x2cd42cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x2cd430: 0x26050020
    ctx->pc = 0x2cd430u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 32));
    // 0x2cd434: 0xc0b330e
    ctx->pc = 0x2CD434u;
    SET_GPR_U32(ctx, 31, 0x2CD43Cu);
    ctx->pc = 0x2CD438u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    ctx->pc = 0x2CCC38u;
    {
        const uint32_t __entryPc = ctx->pc;
        getUniqueIdx_0x2ccc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD43Cu; }
    }
    if (ctx->pc != 0x2CD43Cu) { return; }
    ctx->pc = 0x2CD43Cu;
    // 0x2cd43c: 0x40302d
    ctx->pc = 0x2cd43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd440: 0x4c0000e
    ctx->pc = 0x2CD440u;
    {
        const bool branch_taken_0x2cd440 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2CD444u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2cd440) {
            ctx->pc = 0x2CD47Cu;
            goto label_2cd47c;
        }
    }
    ctx->pc = 0x2CD448u;
    // 0x2cd448: 0x2402000c
    ctx->pc = 0x2cd448u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cd44c: 0xc21018
    ctx->pc = 0x2cd44cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2cd450: 0x8e030010
    ctx->pc = 0x2cd450u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cd454: 0x431021
    ctx->pc = 0x2cd454u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cd458: 0xc6200030
    ctx->pc = 0x2cd458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd45c: 0xe4400000
    ctx->pc = 0x2cd45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2cd460: 0xc6200034
    ctx->pc = 0x2cd460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd464: 0xe4400004
    ctx->pc = 0x2cd464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2cd468: 0xc6200038
    ctx->pc = 0x2cd468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd46c: 0xe4400008
    ctx->pc = 0x2cd46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2cd470: 0xa6460056
    ctx->pc = 0x2cd470u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 86), (uint16_t)GPR_U32(ctx, 6));
label_2cd474:
    // 0x2cd474: 0xc0102d
    ctx->pc = 0x2cd474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd478: 0xdfbf0030
    ctx->pc = 0x2cd478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cd47c:
    // 0x2cd47c: 0xdfb20020
    ctx->pc = 0x2cd47cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd480: 0xdfb10010
    ctx->pc = 0x2cd480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd484: 0xdfb00000
    ctx->pc = 0x2cd484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd488: 0x3e00008
    ctx->pc = 0x2CD488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD48Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CD474u: goto label_2cd474;
            case 0x2CD47Cu: goto label_2cd47c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CD490u;
}
