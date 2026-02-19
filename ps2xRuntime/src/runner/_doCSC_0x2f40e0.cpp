#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _doCSC
// Address: 0x2f40e0 - 0x2f41c8
void _doCSC_0x2f40e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f40e0u;

    // 0x2f40e0: 0x27bdffd0
    ctx->pc = 0x2f40e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f40e4: 0x3c031000
    ctx->pc = 0x2f40e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f40e8: 0xffbf0020
    ctx->pc = 0x2f40e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f40ec: 0x53980
    ctx->pc = 0x2f40ecu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 5), 6));
    // 0x2f40f0: 0x80302d
    ctx->pc = 0x2f40f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f40f4: 0x34632010
    ctx->pc = 0x2f40f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
label_2f40f8:
    // 0x2f40f8: 0x8c620000
    ctx->pc = 0x2f40f8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2f40fc: 0x0
    ctx->pc = 0x2f40fcu;
    // NOP
    // 0x2f4100: 0x0
    ctx->pc = 0x2f4100u;
    // NOP
    // 0x2f4104: 0x0
    ctx->pc = 0x2f4104u;
    // NOP
    // 0x2f4108: 0x0
    ctx->pc = 0x2f4108u;
    // NOP
    // 0x2f410c: 0x440fffa
    ctx->pc = 0x2F410Cu;
    {
        const bool branch_taken_0x2f410c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f410c) {
            ctx->pc = 0x2F40F8u;
            goto label_2f40f8;
        }
    }
    ctx->pc = 0x2F4114u;
    // 0x2f4114: 0x3c020fff
    ctx->pc = 0x2f4114u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2f4118: 0x3c041000
    ctx->pc = 0x2f4118u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2f411c: 0x3442ffff
    ctx->pc = 0x2f411cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2f4120: 0x3484b010
    ctx->pc = 0x2f4120u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 45072));
    // 0x2f4124: 0xc21024
    ctx->pc = 0x2f4124u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2f4128: 0x3c031000
    ctx->pc = 0x2f4128u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f412c: 0xac820000
    ctx->pc = 0x2f412cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x2f4130: 0x3463b020
    ctx->pc = 0x2f4130u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45088));
    // 0x2f4134: 0xac670000
    ctx->pc = 0x2f4134u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7)); // MMIO: 0x10000000
    // 0x2f4138: 0x3c021000
    ctx->pc = 0x2f4138u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f413c: 0x3442b000
    ctx->pc = 0x2f413cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45056));
    // 0x2f4140: 0x24030100
    ctx->pc = 0x2f4140u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f4144: 0x3c047000
    ctx->pc = 0x2f4144u;
    SET_GPR_U32(ctx, 4, ((uint32_t)28672 << 16));
    // 0x2f4148: 0xac430000
    ctx->pc = 0x2f4148u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x2f414c: 0xc0bc8ce
    ctx->pc = 0x2F414Cu;
    SET_GPR_U32(ctx, 31, 0x2F4154u);
    ctx->pc = 0x2F4150u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->pc = 0x2F2338u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x2f2338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4154u; }
    }
    if (ctx->pc != 0x2F4154u) { return; }
    ctx->pc = 0x2F4154u;
    // 0x2f4154: 0x3c02003a
    ctx->pc = 0x2f4154u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f4158: 0x24030004
    ctx->pc = 0x2f4158u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f415c: 0x8c443024
    ctx->pc = 0x2f415cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12324)));
    // 0x2f4160: 0x3a0282d
    ctx->pc = 0x2f4160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4164: 0xc0bb834
    ctx->pc = 0x2F4164u;
    SET_GPR_U32(ctx, 31, 0x2F416Cu);
    ctx->pc = 0x2F4168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x2EE0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x2ee0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F416Cu; }
    }
    if (ctx->pc != 0x2F416Cu) { return; }
    ctx->pc = 0x2F416Cu;
    // 0x2f416c: 0x3c031000
    ctx->pc = 0x2f416cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f4170: 0x3463b000
    ctx->pc = 0x2f4170u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x2f4174: 0x0
    ctx->pc = 0x2f4174u;
    // NOP
label_2f4178:
    // 0x2f4178: 0x8c620000
    ctx->pc = 0x2f4178u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2f417c: 0x21202
    ctx->pc = 0x2f417cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4180: 0x30420001
    ctx->pc = 0x2f4180u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2f4184: 0x0
    ctx->pc = 0x2f4184u;
    // NOP
    // 0x2f4188: 0x0
    ctx->pc = 0x2f4188u;
    // NOP
    // 0x2f418c: 0x1440fffa
    ctx->pc = 0x2F418Cu;
    {
        const bool branch_taken_0x2f418c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f418c) {
            ctx->pc = 0x2F4178u;
            goto label_2f4178;
        }
    }
    ctx->pc = 0x2F4194u;
    // 0x2f4194: 0x3c031000
    ctx->pc = 0x2f4194u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f4198: 0x34632010
    ctx->pc = 0x2f4198u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x2f419c: 0x0
    ctx->pc = 0x2f419cu;
    // NOP
label_2f41a0:
    // 0x2f41a0: 0x8c620000
    ctx->pc = 0x2f41a0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2f41a4: 0x0
    ctx->pc = 0x2f41a4u;
    // NOP
    // 0x2f41a8: 0x0
    ctx->pc = 0x2f41a8u;
    // NOP
    // 0x2f41ac: 0x0
    ctx->pc = 0x2f41acu;
    // NOP
    // 0x2f41b0: 0x0
    ctx->pc = 0x2f41b0u;
    // NOP
    // 0x2f41b4: 0x440fffa
    ctx->pc = 0x2F41B4u;
    {
        const bool branch_taken_0x2f41b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f41b4) {
            ctx->pc = 0x2F41A0u;
            goto label_2f41a0;
        }
    }
    ctx->pc = 0x2F41BCu;
    // 0x2f41bc: 0xdfbf0020
    ctx->pc = 0x2f41bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f41c0: 0x3e00008
    ctx->pc = 0x2F41C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F41C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F40F8u: goto label_2f40f8;
            case 0x2F4178u: goto label_2f4178;
            case 0x2F41A0u: goto label_2f41a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F41C8u;
}
