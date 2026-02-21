#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _doCSC2
// Address: 0x2f4280 - 0x2f4430
void _doCSC2_0x2f4280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f4280u;

    // 0x2f4280: 0x27bdff80
    ctx->pc = 0x2f4280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f4284: 0x3c020fff
    ctx->pc = 0x2f4284u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2f4288: 0xffb10030
    ctx->pc = 0x2f4288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f428c: 0x3442ffff
    ctx->pc = 0x2f428cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2f4290: 0xffb00020
    ctx->pc = 0x2f4290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f4294: 0x80882d
    ctx->pc = 0x2f4294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4298: 0x24b0fc01
    ctx->pc = 0x2f4298u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 4294966273));
    // 0x2f429c: 0x3c06003a
    ctx->pc = 0x2f429cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2f42a0: 0x102280
    ctx->pc = 0x2f42a0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 10));
    // 0x2f42a4: 0xffb40060
    ctx->pc = 0x2f42a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2f42a8: 0x2242021
    ctx->pc = 0x2f42a8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2f42ac: 0xffb20040
    ctx->pc = 0x2f42acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2f42b0: 0x822024
    ctx->pc = 0x2f42b0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f42b4: 0x24c33a00
    ctx->pc = 0x2f42b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 14848));
    // 0x2f42b8: 0xffbf0070
    ctx->pc = 0x2f42b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f42bc: 0x240203ff
    ctx->pc = 0x2f42bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2f42c0: 0xffb30050
    ctx->pc = 0x2f42c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2f42c4: 0x3405ffc0
    ctx->pc = 0x2f42c4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
    // 0x2f42c8: 0xac62000c
    ctx->pc = 0x2f42c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2f42cc: 0x3c14003a
    ctx->pc = 0x2f42ccu;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2f42d0: 0xacc03a00
    ctx->pc = 0x2f42d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 14848), GPR_U32(ctx, 0));
    // 0x2f42d4: 0x109180
    ctx->pc = 0x2f42d4u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), 6));
    // 0x2f42d8: 0xac640004
    ctx->pc = 0x2f42d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2f42dc: 0x3c061000
    ctx->pc = 0x2f42dcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x2f42e0: 0xac650008
    ctx->pc = 0x2f42e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x2f42e4: 0x34c62010
    ctx->pc = 0x2f42e4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 8208));
    // 0x2f42e8: 0xae8039f8
    ctx->pc = 0x2f42e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 14840), GPR_U32(ctx, 0));
    // 0x2f42ec: 0x0
    ctx->pc = 0x2f42ecu;
    // NOP
label_2f42f0:
    // 0x2f42f0: 0x8cc20000
    ctx->pc = 0x2f42f0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x2f42f4: 0x0
    ctx->pc = 0x2f42f4u;
    // NOP
    // 0x2f42f8: 0x0
    ctx->pc = 0x2f42f8u;
    // NOP
    // 0x2f42fc: 0x0
    ctx->pc = 0x2f42fcu;
    // NOP
    // 0x2f4300: 0x0
    ctx->pc = 0x2f4300u;
    // NOP
    // 0x2f4304: 0x440fffa
    ctx->pc = 0x2F4304u;
    {
        const bool branch_taken_0x2f4304 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f4304) {
            ctx->pc = 0x2F42F0u;
            goto label_2f42f0;
        }
    }
    ctx->pc = 0x2F430Cu;
    // 0x2f430c: 0x3c05002f
    ctx->pc = 0x2f430cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)47 << 16));
    // 0x2f4310: 0x24040003
    ctx->pc = 0x2f4310u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f4314: 0x24a541c8
    ctx->pc = 0x2f4314u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16840));
    // 0x2f4318: 0xc0c0cbc
    ctx->pc = 0x2F4318u;
    SET_GPR_U32(ctx, 31, 0x2F4320u);
    ctx->pc = 0x2F431Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3032F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler_0x3032f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4320u; }
    }
    if (ctx->pc != 0x2F4320u) { return; }
    ctx->pc = 0x2F4320u;
    // 0x2f4320: 0x40982d
    ctx->pc = 0x2f4320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4324: 0x24030008
    ctx->pc = 0x2f4324u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f4328: 0x3c021000
    ctx->pc = 0x2f4328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f432c: 0x24040003
    ctx->pc = 0x2f432cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f4330: 0x3442e010
    ctx->pc = 0x2f4330u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 57360));
    // 0x2f4334: 0xc0c1062
    ctx->pc = 0x2F4334u;
    SET_GPR_U32(ctx, 31, 0x2F433Cu);
    ctx->pc = 0x2F4338u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x304188u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x304188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F433Cu; }
    }
    if (ctx->pc != 0x2F433Cu) { return; }
    ctx->pc = 0x2F433Cu;
    // 0x2f433c: 0x3c030fff
    ctx->pc = 0x2f433cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4095 << 16));
    // 0x2f4340: 0x3c041000
    ctx->pc = 0x2f4340u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2f4344: 0x3463ffff
    ctx->pc = 0x2f4344u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2f4348: 0x3484b010
    ctx->pc = 0x2f4348u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 45072));
    // 0x2f434c: 0x2231824
    ctx->pc = 0x2f434cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2f4350: 0x3c021000
    ctx->pc = 0x2f4350u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f4354: 0xac830000
    ctx->pc = 0x2f4354u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x2f4358: 0x3442b020
    ctx->pc = 0x2f4358u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45088));
    // 0x2f435c: 0xac520000
    ctx->pc = 0x2f435cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x2f4360: 0x3c031000
    ctx->pc = 0x2f4360u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f4364: 0x3463b000
    ctx->pc = 0x2f4364u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x2f4368: 0x24050100
    ctx->pc = 0x2f4368u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f436c: 0x3c041000
    ctx->pc = 0x2f436cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2f4370: 0x3c027000
    ctx->pc = 0x2f4370u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x2f4374: 0xac650000
    ctx->pc = 0x2f4374u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x2f4378: 0x2021025
    ctx->pc = 0x2f4378u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f437c: 0x34842000
    ctx->pc = 0x2f437cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8192));
    // 0x2f4380: 0x24030004
    ctx->pc = 0x2f4380u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f4384: 0xac820000
    ctx->pc = 0x2f4384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2f4388: 0x3a0282d
    ctx->pc = 0x2f4388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f438c: 0x3c02003a
    ctx->pc = 0x2f438cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f4390: 0xafa30000
    ctx->pc = 0x2f4390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2f4394: 0xc0bb834
    ctx->pc = 0x2F4394u;
    SET_GPR_U32(ctx, 31, 0x2F439Cu);
    ctx->pc = 0x2F4398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12324)));
    ctx->pc = 0x2EE0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x2ee0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F439Cu; }
    }
    if (ctx->pc != 0x2F439Cu) { return; }
    ctx->pc = 0x2F439Cu;
    // 0x2f439c: 0x3c03003a
    ctx->pc = 0x2f439cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2f43a0:
    // 0x2f43a0: 0x8c623a00
    ctx->pc = 0x2f43a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 14848)));
    // 0x2f43a4: 0x28420002
    ctx->pc = 0x2f43a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x2f43a8: 0x0
    ctx->pc = 0x2f43a8u;
    // NOP
    // 0x2f43ac: 0x0
    ctx->pc = 0x2f43acu;
    // NOP
    // 0x2f43b0: 0x0
    ctx->pc = 0x2f43b0u;
    // NOP
    // 0x2f43b4: 0x1440fffa
    ctx->pc = 0x2F43B4u;
    {
        const bool branch_taken_0x2f43b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f43b4) {
            ctx->pc = 0x2F43A0u;
            goto label_2f43a0;
        }
    }
    ctx->pc = 0x2F43BCu;
    // 0x2f43bc: 0x8e8239f8
    ctx->pc = 0x2f43bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 14840)));
    // 0x2f43c0: 0x10400005
    ctx->pc = 0x2F43C0u;
    {
        const bool branch_taken_0x2f43c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F43C4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
        if (branch_taken_0x2f43c0) {
            ctx->pc = 0x2F43D8u;
            goto label_2f43d8;
        }
    }
    ctx->pc = 0x2F43C8u;
    // 0x2f43c8: 0x3c04003c
    ctx->pc = 0x2f43c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2f43cc: 0xc0bba56
    ctx->pc = 0x2F43CCu;
    SET_GPR_U32(ctx, 31, 0x2F43D4u);
    ctx->pc = 0x2F43D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943096));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F43D4u; }
    }
    if (ctx->pc != 0x2F43D4u) { return; }
    ctx->pc = 0x2F43D4u;
    // 0x2f43d4: 0x3c031000
    ctx->pc = 0x2f43d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
label_2f43d8:
    // 0x2f43d8: 0x34632010
    ctx->pc = 0x2f43d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x2f43dc: 0x0
    ctx->pc = 0x2f43dcu;
    // NOP
label_2f43e0:
    // 0x2f43e0: 0x8c620000
    ctx->pc = 0x2f43e0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2f43e4: 0x0
    ctx->pc = 0x2f43e4u;
    // NOP
    // 0x2f43e8: 0x0
    ctx->pc = 0x2f43e8u;
    // NOP
    // 0x2f43ec: 0x0
    ctx->pc = 0x2f43ecu;
    // NOP
    // 0x2f43f0: 0x0
    ctx->pc = 0x2f43f0u;
    // NOP
    // 0x2f43f4: 0x440fffa
    ctx->pc = 0x2F43F4u;
    {
        const bool branch_taken_0x2f43f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f43f4) {
            ctx->pc = 0x2F43E0u;
            goto label_2f43e0;
        }
    }
    ctx->pc = 0x2F43FCu;
    // 0x2f43fc: 0xc0c1048
    ctx->pc = 0x2F43FCu;
    SET_GPR_U32(ctx, 31, 0x2F4404u);
    ctx->pc = 0x2F4400u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x304120u;
    {
        const uint32_t __entryPc = ctx->pc;
        DisableDmac_0x304120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4404u; }
    }
    if (ctx->pc != 0x2F4404u) { return; }
    ctx->pc = 0x2F4404u;
    // 0x2f4404: 0x260282d
    ctx->pc = 0x2f4404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4408: 0xc0c0cc4
    ctx->pc = 0x2F4408u;
    SET_GPR_U32(ctx, 31, 0x2F4410u);
    ctx->pc = 0x2F440Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x303310u;
    {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x303310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4410u; }
    }
    if (ctx->pc != 0x2F4410u) { return; }
    ctx->pc = 0x2F4410u;
    // 0x2f4410: 0xdfbf0070
    ctx->pc = 0x2f4410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f4414: 0xdfb40060
    ctx->pc = 0x2f4414u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f4418: 0xdfb30050
    ctx->pc = 0x2f4418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f441c: 0xdfb20040
    ctx->pc = 0x2f441cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f4420: 0xdfb10030
    ctx->pc = 0x2f4420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f4424: 0xdfb00020
    ctx->pc = 0x2f4424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4428: 0x3e00008
    ctx->pc = 0x2F4428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F442Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F42F0u: goto label_2f42f0;
            case 0x2F43A0u: goto label_2f43a0;
            case 0x2F43D8u: goto label_2f43d8;
            case 0x2F43E0u: goto label_2f43e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F4430u;
}
