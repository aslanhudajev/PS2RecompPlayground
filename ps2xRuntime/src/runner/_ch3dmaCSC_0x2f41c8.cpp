#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ch3dmaCSC
// Address: 0x2f41c8 - 0x2f4280
void _ch3dmaCSC_0x2f41c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f41c8u;

    // 0x2f41c8: 0x3c031000
    ctx->pc = 0x2f41c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f41cc: 0x24040008
    ctx->pc = 0x2f41ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f41d0: 0x3463e010
    ctx->pc = 0x2f41d0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 57360));
    // 0x2f41d4: 0x3c021000
    ctx->pc = 0x2f41d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f41d8: 0xac640000
    ctx->pc = 0x2f41d8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x2f41dc: 0x3442b020
    ctx->pc = 0x2f41dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45088));
    // 0x2f41e0: 0x8c430000
    ctx->pc = 0x2f41e0u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2f41e4: 0x14600007
    ctx->pc = 0x2F41E4u;
    {
        const bool branch_taken_0x2f41e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F41E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f41e4) {
            ctx->pc = 0x2F4204u;
            goto label_2f4204;
        }
    }
    ctx->pc = 0x2F41ECu;
    // 0x2f41ec: 0x3c021000
    ctx->pc = 0x2f41ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f41f0: 0x3442b000
    ctx->pc = 0x2f41f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45056));
    // 0x2f41f4: 0x8c430000
    ctx->pc = 0x2f41f4u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2f41f8: 0x30630100
    ctx->pc = 0x2f41f8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x2f41fc: 0x10600005
    ctx->pc = 0x2F41FCu;
    {
        const bool branch_taken_0x2f41fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F4200u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f41fc) {
            ctx->pc = 0x2F4214u;
            goto label_2f4214;
        }
    }
    ctx->pc = 0x2F4204u;
label_2f4204:
    // 0x2f4204: 0x3c03003a
    ctx->pc = 0x2f4204u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f4208: 0xac6239f8
    ctx->pc = 0x2f4208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14840), GPR_U32(ctx, 2));
    // 0x2f420c: 0x3e00008
    ctx->pc = 0x2F420Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4210u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F4204u: goto label_2f4204;
            case 0x2F4214u: goto label_2f4214;
            case 0x2F4264u: goto label_2f4264;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F4214u;
label_2f4214:
    // 0x2f4214: 0x3c08003a
    ctx->pc = 0x2f4214u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x2f4218: 0x8d023a00
    ctx->pc = 0x2f4218u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 14848)));
    // 0x2f421c: 0x14400011
    ctx->pc = 0x2F421Cu;
    {
        const bool branch_taken_0x2f421c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F4220u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 8), 14848));
        if (branch_taken_0x2f421c) {
            ctx->pc = 0x2F4264u;
            goto label_2f4264;
        }
    }
    ctx->pc = 0x2F4224u;
    // 0x2f4224: 0x8ce40004
    ctx->pc = 0x2f4224u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2f4228: 0x3c021000
    ctx->pc = 0x2f4228u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f422c: 0x3442b010
    ctx->pc = 0x2f422cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45072));
    // 0x2f4230: 0x24060100
    ctx->pc = 0x2f4230u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f4234: 0xac440000
    ctx->pc = 0x2f4234u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x2f4238: 0x3c031000
    ctx->pc = 0x2f4238u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f423c: 0x3c057000
    ctx->pc = 0x2f423cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)28672 << 16));
    // 0x2f4240: 0x34632000
    ctx->pc = 0x2f4240u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8192));
    // 0x2f4244: 0x8ce40008
    ctx->pc = 0x2f4244u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2f4248: 0x8ce2000c
    ctx->pc = 0x2f4248u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2f424c: 0x3c011001
    ctx->pc = 0x2f424cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x2f4250: 0xac24b020
    ctx->pc = 0x2f4250u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 4)); // MMIO: 0x1000b020
    // 0x2f4254: 0x451025
    ctx->pc = 0x2f4254u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f4258: 0x3c011001
    ctx->pc = 0x2f4258u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x2f425c: 0xac26b000
    ctx->pc = 0x2f425cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 6)); // MMIO: 0x1000b000
    // 0x2f4260: 0xac620000
    ctx->pc = 0x2f4260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2f4264:
    // 0x2f4264: 0x8d023a00
    ctx->pc = 0x2f4264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 14848)));
    // 0x2f4268: 0x24420001
    ctx->pc = 0x2f4268u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f426c: 0xad023a00
    ctx->pc = 0x2f426cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 14848), GPR_U32(ctx, 2));
    // 0x2f4270: 0xf
    ctx->pc = 0x2f4270u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2f4274: 0x42000038
    ctx->pc = 0x2f4274u;
    ctx->cop0_status |= 0x1; // Enable interrupts
    // 0x2f4278: 0x3e00008
    ctx->pc = 0x2F4278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F427Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F4204u: goto label_2f4204;
            case 0x2F4214u: goto label_2f4214;
            case 0x2F4264u: goto label_2f4264;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F4280u;
}
