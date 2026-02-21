#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDBCamPos
// Address: 0x2a3918 - 0x2a39c8
void pbDBCamPos_0x2a3918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a3918u;

    // 0x2a3918: 0x27bdffc0
    ctx->pc = 0x2a3918u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a391c: 0xffbf0030
    ctx->pc = 0x2a391cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a3920: 0xffb20020
    ctx->pc = 0x2a3920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a3924: 0xffb10010
    ctx->pc = 0x2a3924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a3928: 0xffb00000
    ctx->pc = 0x2a3928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a392c: 0x80902d
    ctx->pc = 0x2a392cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3930: 0xa0882d
    ctx->pc = 0x2a3930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3934: 0x3c100036
    ctx->pc = 0x2a3934u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a3938: 0x8e04e120
    ctx->pc = 0x2a3938u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294959392)));
    // 0x2a393c: 0xc0b9514
    ctx->pc = 0x2A393Cu;
    SET_GPR_U32(ctx, 31, 0x2A3944u);
    ctx->pc = 0x2A3940u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 80));
    ctx->pc = 0x2E5450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x2e5450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3944u; }
    }
    if (ctx->pc != 0x2A3944u) { return; }
    ctx->pc = 0x2A3944u;
    // 0x2a3944: 0x8e04e120
    ctx->pc = 0x2a3944u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294959392)));
    // 0x2a3948: 0x24840040
    ctx->pc = 0x2a3948u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
    // 0x2a394c: 0xc0b958e
    ctx->pc = 0x2A394Cu;
    SET_GPR_U32(ctx, 31, 0x2A3954u);
    ctx->pc = 0x2A3950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3954u; }
    }
    if (ctx->pc != 0x2A3954u) { return; }
    ctx->pc = 0x2A3954u;
    // 0x2a3954: 0x8e04e120
    ctx->pc = 0x2a3954u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294959392)));
    // 0x2a3958: 0x24840060
    ctx->pc = 0x2a3958u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 96));
    // 0x2a395c: 0x3c014170
    ctx->pc = 0x2a395cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x2a3960: 0x44816000
    ctx->pc = 0x2a3960u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2a3964: 0xc0b957c
    ctx->pc = 0x2A3964u;
    SET_GPR_U32(ctx, 31, 0x2A396Cu);
    ctx->pc = 0x2A3968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E55F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x2e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A396Cu; }
    }
    if (ctx->pc != 0x2A396Cu) { return; }
    ctx->pc = 0x2A396Cu;
    // 0x2a396c: 0x8e05e120
    ctx->pc = 0x2a396cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294959392)));
    // 0x2a3970: 0x24a50060
    ctx->pc = 0x2a3970u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 96));
    // 0x2a3974: 0xa0202d
    ctx->pc = 0x2a3974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3978: 0xc0b956a
    ctx->pc = 0x2A3978u;
    SET_GPR_U32(ctx, 31, 0x2A3980u);
    ctx->pc = 0x2A397Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E55A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x2e55a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3980u; }
    }
    if (ctx->pc != 0x2A3980u) { return; }
    ctx->pc = 0x2A3980u;
    // 0x2a3980: 0x8e05e120
    ctx->pc = 0x2a3980u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294959392)));
    // 0x2a3984: 0x24020001
    ctx->pc = 0x2a3984u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3988: 0xaca20000
    ctx->pc = 0x2a3988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2a398c: 0x8ca20020
    ctx->pc = 0x2a398cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2a3990: 0x14400008
    ctx->pc = 0x2A3990u;
    {
        const bool branch_taken_0x2a3990 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A3994u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2a3990) {
            ctx->pc = 0x2A39B4u;
            goto label_2a39b4;
        }
    }
    ctx->pc = 0x2A3998u;
    // 0x2a3998: 0x24a40010
    ctx->pc = 0x2a3998u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 16));
    // 0x2a399c: 0x24a50060
    ctx->pc = 0x2a399cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 96));
    // 0x2a39a0: 0xdfb20020
    ctx->pc = 0x2a39a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a39a4: 0xdfb10010
    ctx->pc = 0x2a39a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a39a8: 0xdfb00000
    ctx->pc = 0x2a39a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a39ac: 0x80b958e
    ctx->pc = 0x2A39ACu;
    ctx->pc = 0x2A39B0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2E5638u;
    sceVu0CopyVector_0x2e5638(rdram, ctx, runtime); return;
    ctx->pc = 0x2A39B4u;
label_2a39b4:
    // 0x2a39b4: 0xdfb20020
    ctx->pc = 0x2a39b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a39b8: 0xdfb10010
    ctx->pc = 0x2a39b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a39bc: 0xdfb00000
    ctx->pc = 0x2a39bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a39c0: 0x3e00008
    ctx->pc = 0x2A39C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A39C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A39B4u: goto label_2a39b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A39C8u;
}
