#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNewPolyNode
// Address: 0x2cf318 - 0x2cf384
void MBNewPolyNode_0x2cf318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cf318u;

    // 0x2cf318: 0x27bdffd0
    ctx->pc = 0x2cf318u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf31c: 0xffbf0020
    ctx->pc = 0x2cf31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cf320: 0xffb10010
    ctx->pc = 0x2cf320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cf324: 0xffb00000
    ctx->pc = 0x2cf324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf328: 0xa0882d
    ctx->pc = 0x2cf328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf32c: 0x2403000a
    ctx->pc = 0x2cf32cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cf330: 0x2402000b
    ctx->pc = 0x2cf330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x2cf334: 0x38c60001
    ctx->pc = 0x2cf334u;
    SET_GPR_U32(ctx, 6, XOR32(GPR_U32(ctx, 6), 1));
    // 0x2cf338: 0x3c05003a
    ctx->pc = 0x2cf338u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2cf33c: 0x24a52550
    ctx->pc = 0x2cf33cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x2cf340: 0x66100b
    ctx->pc = 0x2cf340u;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x2cf344: 0xc0b3ec0
    ctx->pc = 0x2CF344u;
    SET_GPR_U32(ctx, 31, 0x2CF34Cu);
    ctx->pc = 0x2CF348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF34Cu; }
    }
    if (ctx->pc != 0x2CF34Cu) { return; }
    ctx->pc = 0x2CF34Cu;
    // 0x2cf34c: 0x40802d
    ctx->pc = 0x2cf34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf350: 0x12000007
    ctx->pc = 0x2CF350u;
    {
        const bool branch_taken_0x2cf350 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF354u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cf350) {
            ctx->pc = 0x2CF370u;
            goto label_2cf370;
        }
    }
    ctx->pc = 0x2CF358u;
    // 0x2cf358: 0xc0b3ca2
    ctx->pc = 0x2CF358u;
    SET_GPR_U32(ctx, 31, 0x2CF360u);
    ctx->pc = 0x2CF35Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF288u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBCreatePolyHeader_0x2cf288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF360u; }
    }
    if (ctx->pc != 0x2CF360u) { return; }
    ctx->pc = 0x2CF360u;
    // 0x2cf360: 0xae000060
    ctx->pc = 0x2cf360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2cf364: 0xae020070
    ctx->pc = 0x2cf364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x2cf368: 0xae00006c
    ctx->pc = 0x2cf368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x2cf36c: 0x200102d
    ctx->pc = 0x2cf36cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf370:
    // 0x2cf370: 0xdfbf0020
    ctx->pc = 0x2cf370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf374: 0xdfb10010
    ctx->pc = 0x2cf374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf378: 0xdfb00000
    ctx->pc = 0x2cf378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf37c: 0x3e00008
    ctx->pc = 0x2CF37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF380u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CF370u: goto label_2cf370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CF384u;
}
