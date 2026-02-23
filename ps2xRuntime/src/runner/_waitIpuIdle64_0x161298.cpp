#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _waitIpuIdle64
// Address: 0x161298 - 0x161348
void _waitIpuIdle64_0x161298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_waitIpuIdle64");


    ctx->pc = 0x161298u;

    // 0x161298: 0x27bdffc0
    ctx->pc = 0x161298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16129c: 0x3c021000
    ctx->pc = 0x16129cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1612a0: 0xffbf0030
    ctx->pc = 0x1612a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1612a4: 0x34422000
    ctx->pc = 0x1612a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x1612a8: 0xffb20020
    ctx->pc = 0x1612a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1612ac: 0x282d
    ctx->pc = 0x1612acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612b0: 0xffb10010
    ctx->pc = 0x1612b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1612b4: 0xffb00000
    ctx->pc = 0x1612b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1612b8: 0xdc440000
    ctx->pc = 0x1612b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1612bc: 0x481001c
    ctx->pc = 0x1612BCu;
    {
        const bool branch_taken_0x1612bc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1612C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1612bc) {
            ctx->pc = 0x161330u;
            goto label_161330;
        }
    }
    ctx->pc = 0x1612C4u;
    // 0x1612c4: 0x3c021000
    ctx->pc = 0x1612c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1612c8: 0x34422010
    ctx->pc = 0x1612c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x1612cc: 0x8c430000
    ctx->pc = 0x1612ccu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1612d0: 0x30634000
    ctx->pc = 0x1612d0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x1612d4: 0x14600017
    ctx->pc = 0x1612D4u;
    {
        const bool branch_taken_0x1612d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1612D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1612d4) {
            ctx->pc = 0x161334u;
            goto label_161334;
        }
    }
    ctx->pc = 0x1612DCu;
    // 0x1612dc: 0x3c111000
    ctx->pc = 0x1612dcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)4096 << 16));
    // 0x1612e0: 0x3c101000
    ctx->pc = 0x1612e0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)4096 << 16));
    // 0x1612e4: 0x3c120023
    ctx->pc = 0x1612e4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x1612e8: 0x36312000
    ctx->pc = 0x1612e8u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 8192));
    // 0x1612ec: 0x36102010
    ctx->pc = 0x1612ecu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 8208));
    // 0x1612f0: 0xa0102d
    ctx->pc = 0x1612f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612f4: 0x0
    ctx->pc = 0x1612f4u;
    // NOP
label_1612f8:
    // 0x1612f8: 0x28421389
    ctx->pc = 0x1612f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x1612fc: 0x14400004
    ctx->pc = 0x1612FCu;
    {
        const bool branch_taken_0x1612fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161300u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x1612fc) {
            ctx->pc = 0x161310u;
            goto label_161310;
        }
    }
    ctx->pc = 0x161304u;
    // 0x161304: 0xc058f00
    ctx->pc = 0x161304u;
    SET_GPR_U32(ctx, 31, 0x16130Cu);
    ctx->pc = 0x161308u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294943260)));
    ctx->pc = 0x163C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x163c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16130Cu; }
        else if (ctx->pc != 0x16130Cu) { ctx->pc = 0x16130Cu; }
    }
    if (ctx->pc != 0x16130Cu) { return; }
    ctx->pc = 0x16130Cu;
    // 0x16130c: 0x282d
    ctx->pc = 0x16130cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161310:
    // 0x161310: 0xde240000
    ctx->pc = 0x161310u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x161314: 0x4810006
    ctx->pc = 0x161314u;
    {
        const bool branch_taken_0x161314 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x161318u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x161314) {
            ctx->pc = 0x161330u;
            goto label_161330;
        }
    }
    ctx->pc = 0x16131Cu;
    // 0x16131c: 0x8e020000
    ctx->pc = 0x16131cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x161320: 0x30424000
    ctx->pc = 0x161320u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x161324: 0x1040fff4
    ctx->pc = 0x161324u;
    {
        const bool branch_taken_0x161324 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x161328u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161324) {
            ctx->pc = 0x1612F8u;
            goto label_1612f8;
        }
    }
    ctx->pc = 0x16132Cu;
    // 0x16132c: 0xdfbf0030
    ctx->pc = 0x16132cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_161330:
    // 0x161330: 0x80102d
    ctx->pc = 0x161330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161334:
    // 0x161334: 0xdfb20020
    ctx->pc = 0x161334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161338: 0xdfb10010
    ctx->pc = 0x161338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16133c: 0xdfb00000
    ctx->pc = 0x16133cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161340: 0x3e00008
    ctx->pc = 0x161340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161344u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1612F8u: goto label_1612f8;
            case 0x161310u: goto label_161310;
            case 0x161330u: goto label_161330;
            case 0x161334u: goto label_161334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161348u;
}
