#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _csc_storeRefImage
// Address: 0x2f4430 - 0x2f4584
void _csc_storeRefImage_0x2f4430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f4430u;

    // 0x2f4430: 0x27bdff80
    ctx->pc = 0x2f4430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f4434: 0x24030002
    ctx->pc = 0x2f4434u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f4438: 0xffb40060
    ctx->pc = 0x2f4438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2f443c: 0x3a0282d
    ctx->pc = 0x2f443cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4440: 0xffb00020
    ctx->pc = 0x2f4440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f4444: 0x3c14003a
    ctx->pc = 0x2f4444u;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2f4448: 0xffb10030
    ctx->pc = 0x2f4448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f444c: 0x80802d
    ctx->pc = 0x2f444cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4450: 0xffbf0070
    ctx->pc = 0x2f4450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f4454: 0xffb30050
    ctx->pc = 0x2f4454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2f4458: 0xffb20040
    ctx->pc = 0x2f4458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2f445c: 0x8e843024
    ctx->pc = 0x2f445cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 12324)));
    // 0x2f4460: 0x8e06000c
    ctx->pc = 0x2f4460u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f4464: 0x8e020010
    ctx->pc = 0x2f4464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2f4468: 0x8c930040
    ctx->pc = 0x2f4468u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2f446c: 0xafa30000
    ctx->pc = 0x2f446cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2f4470: 0xc0bb834
    ctx->pc = 0x2F4470u;
    SET_GPR_U32(ctx, 31, 0x2F4478u);
    ctx->pc = 0x2F4474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    ctx->pc = 0x2EE0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x2ee0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4478u; }
    }
    if (ctx->pc != 0x2F4478u) { return; }
    ctx->pc = 0x2F4478u;
    // 0x2f4478: 0x3c031000
    ctx->pc = 0x2f4478u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f447c: 0x34632010
    ctx->pc = 0x2f447cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x2f4480: 0x8c620000
    ctx->pc = 0x2f4480u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2f4484: 0x30424000
    ctx->pc = 0x2f4484u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x2f4488: 0x10400003
    ctx->pc = 0x2F4488u;
    {
        const bool branch_taken_0x2f4488 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F448Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x2f4488) {
            ctx->pc = 0x2F4498u;
            goto label_2f4498;
        }
    }
    ctx->pc = 0x2F4490u;
    // 0x2f4490: 0x3c011000
    ctx->pc = 0x2f4490u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x2f4494: 0xac222010
    ctx->pc = 0x2f4494u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 2)); // MMIO: 0x10002010
label_2f4498:
    // 0x2f4498: 0x3c031000
    ctx->pc = 0x2f4498u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f449c: 0x2a320400
    ctx->pc = 0x2f449cu;
    SET_GPR_U32(ctx, 18, SLT32(GPR_S32(ctx, 17), 1024));
    // 0x2f44a0: 0x34632010
    ctx->pc = 0x2f44a0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x2f44a4: 0x0
    ctx->pc = 0x2f44a4u;
    // NOP
label_2f44a8:
    // 0x2f44a8: 0x8c620000
    ctx->pc = 0x2f44a8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2f44ac: 0x0
    ctx->pc = 0x2f44acu;
    // NOP
    // 0x2f44b0: 0x0
    ctx->pc = 0x2f44b0u;
    // NOP
    // 0x2f44b4: 0x0
    ctx->pc = 0x2f44b4u;
    // NOP
    // 0x2f44b8: 0x0
    ctx->pc = 0x2f44b8u;
    // NOP
    // 0x2f44bc: 0x440fffa
    ctx->pc = 0x2F44BCu;
    {
        const bool branch_taken_0x2f44bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f44bc) {
            ctx->pc = 0x2F44A8u;
            goto label_2f44a8;
        }
    }
    ctx->pc = 0x2F44C4u;
    // 0x2f44c4: 0xc0bc8ce
    ctx->pc = 0x2F44C4u;
    SET_GPR_U32(ctx, 31, 0x2F44CCu);
    ctx->pc = 0x2F44C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F2338u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x2f2338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F44CCu; }
    }
    if (ctx->pc != 0x2F44CCu) { return; }
    ctx->pc = 0x2F44CCu;
    // 0x2f44cc: 0x3c031000
    ctx->pc = 0x2f44ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f44d0: 0x8e060000
    ctx->pc = 0x2f44d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f44d4: 0x34632010
    ctx->pc = 0x2f44d4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
label_2f44d8:
    // 0x2f44d8: 0x8c620000
    ctx->pc = 0x2f44d8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2f44dc: 0x0
    ctx->pc = 0x2f44dcu;
    // NOP
    // 0x2f44e0: 0x0
    ctx->pc = 0x2f44e0u;
    // NOP
    // 0x2f44e4: 0x0
    ctx->pc = 0x2f44e4u;
    // NOP
    // 0x2f44e8: 0x0
    ctx->pc = 0x2f44e8u;
    // NOP
    // 0x2f44ec: 0x440fffa
    ctx->pc = 0x2F44ECu;
    {
        const bool branch_taken_0x2f44ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f44ec) {
            ctx->pc = 0x2F44D8u;
            goto label_2f44d8;
        }
    }
    ctx->pc = 0x2F44F4u;
    // 0x2f44f4: 0x24050018
    ctx->pc = 0x2f44f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f44f8: 0x3c040fff
    ctx->pc = 0x2f44f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4095 << 16));
    // 0x2f44fc: 0x2252818
    ctx->pc = 0x2f44fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f4500: 0x3484ffff
    ctx->pc = 0x2f4500u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2f4504: 0x3c021000
    ctx->pc = 0x2f4504u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f4508: 0xc42024
    ctx->pc = 0x2f4508u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2f450c: 0x3442b410
    ctx->pc = 0x2f450cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46096));
    // 0x2f4510: 0x3c031000
    ctx->pc = 0x2f4510u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f4514: 0xac440000
    ctx->pc = 0x2f4514u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x2f4518: 0x3463b420
    ctx->pc = 0x2f4518u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46112));
    // 0x2f451c: 0xac650000
    ctx->pc = 0x2f451cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x2f4520: 0x3c021000
    ctx->pc = 0x2f4520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f4524: 0x3442b400
    ctx->pc = 0x2f4524u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46080));
    // 0x2f4528: 0x24030101
    ctx->pc = 0x2f4528u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 257));
    // 0x2f452c: 0xac430000
    ctx->pc = 0x2f452cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x2f4530: 0x12400005
    ctx->pc = 0x2F4530u;
    {
        const bool branch_taken_0x2f4530 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F4534u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 216)));
        if (branch_taken_0x2f4530) {
            ctx->pc = 0x2F4548u;
            goto label_2f4548;
        }
    }
    ctx->pc = 0x2F4538u;
    // 0x2f4538: 0xc0bd038
    ctx->pc = 0x2F4538u;
    SET_GPR_U32(ctx, 31, 0x2F4540u);
    ctx->pc = 0x2F453Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F40E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doCSC_0x2f40e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4540u; }
    }
    if (ctx->pc != 0x2F4540u) { return; }
    ctx->pc = 0x2F4540u;
    // 0x2f4540: 0x10000004
    ctx->pc = 0x2F4540u;
    {
        const bool branch_taken_0x2f4540 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F4544u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 12324)));
        if (branch_taken_0x2f4540) {
            ctx->pc = 0x2F4554u;
            goto label_2f4554;
        }
    }
    ctx->pc = 0x2F4548u;
label_2f4548:
    // 0x2f4548: 0xc0bd0a0
    ctx->pc = 0x2F4548u;
    SET_GPR_U32(ctx, 31, 0x2F4550u);
    ctx->pc = 0x2F454Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F4280u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doCSC2_0x2f4280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4550u; }
    }
    if (ctx->pc != 0x2F4550u) { return; }
    ctx->pc = 0x2F4550u;
    // 0x2f4550: 0x8e843024
    ctx->pc = 0x2f4550u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 12324)));
label_2f4554:
    // 0x2f4554: 0x24020003
    ctx->pc = 0x2f4554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f4558: 0xafa20000
    ctx->pc = 0x2f4558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2f455c: 0xc0bb834
    ctx->pc = 0x2F455Cu;
    SET_GPR_U32(ctx, 31, 0x2F4564u);
    ctx->pc = 0x2F4560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x2ee0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4564u; }
    }
    if (ctx->pc != 0x2F4564u) { return; }
    ctx->pc = 0x2F4564u;
    // 0x2f4564: 0xdfbf0070
    ctx->pc = 0x2f4564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f4568: 0xdfb40060
    ctx->pc = 0x2f4568u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f456c: 0xdfb30050
    ctx->pc = 0x2f456cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f4570: 0xdfb20040
    ctx->pc = 0x2f4570u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f4574: 0xdfb10030
    ctx->pc = 0x2f4574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f4578: 0xdfb00020
    ctx->pc = 0x2f4578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f457c: 0x3e00008
    ctx->pc = 0x2F457Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4580u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F4498u: goto label_2f4498;
            case 0x2F44A8u: goto label_2f44a8;
            case 0x2F44D8u: goto label_2f44d8;
            case 0x2F4548u: goto label_2f4548;
            case 0x2F4554u: goto label_2f4554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F4584u;
}
