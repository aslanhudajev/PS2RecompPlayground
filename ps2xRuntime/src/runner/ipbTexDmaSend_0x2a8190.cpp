#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ipbTexDmaSend
// Address: 0x2a8190 - 0x2a82e8
void ipbTexDmaSend_0x2a8190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8190u;

    // 0x2a8190: 0x27bdffd0
    ctx->pc = 0x2a8190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a8194: 0xffbf0020
    ctx->pc = 0x2a8194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a8198: 0xffbe0010
    ctx->pc = 0x2a8198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2a819c: 0x3a0f02d
    ctx->pc = 0x2a819cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81a0: 0xafc40000
    ctx->pc = 0x2a81a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a81a4: 0xafc00004
    ctx->pc = 0x2a81a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x2a81a8: 0x8fc20000
    ctx->pc = 0x2a81a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a81ac: 0x40182d
    ctx->pc = 0x2a81acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81b0: 0x31080
    ctx->pc = 0x2a81b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a81b4: 0x3c030037
    ctx->pc = 0x2a81b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a81b8: 0x24632990
    ctx->pc = 0x2a81b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10640));
    // 0x2a81bc: 0x621021
    ctx->pc = 0x2a81bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a81c0: 0x8c430000
    ctx->pc = 0x2a81c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a81c4: 0x3c020fff
    ctx->pc = 0x2a81c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2a81c8: 0x3442ffff
    ctx->pc = 0x2a81c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2a81cc: 0x621824
    ctx->pc = 0x2a81ccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a81d0: 0xafc30008
    ctx->pc = 0x2a81d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x2a81d4: 0x40024800
    ctx->pc = 0x2a81d4u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2a81d8: 0x40182d
    ctx->pc = 0x2a81d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81dc: 0xafc3000c
    ctx->pc = 0x2a81dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 3));
    // 0x2a81e0: 0x8fc2000c
    ctx->pc = 0x2a81e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a81e4: 0x3c01003a
    ctx->pc = 0x2a81e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x2a81e8: 0xac2220c8
    ctx->pc = 0x2a81e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8392), GPR_U32(ctx, 2));
    // 0x2a81ec: 0x0
    ctx->pc = 0x2a81ecu;
    // NOP
label_2a81f0:
    // 0x2a81f0: 0x3c031001
    ctx->pc = 0x2a81f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4097 << 16));
    // 0x2a81f4: 0x8c63a000
    ctx->pc = 0x2a81f4u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x2a81f8: 0x30620100
    ctx->pc = 0x2a81f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 256));
    // 0x2a81fc: 0x14400003
    ctx->pc = 0x2A81FCu;
    {
        const bool branch_taken_0x2a81fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a81fc) {
            ctx->pc = 0x2A820Cu;
            goto label_2a820c;
        }
    }
    ctx->pc = 0x2A8204u;
    // 0x2a8204: 0x10000011
    ctx->pc = 0x2A8204u;
    {
        const bool branch_taken_0x2a8204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8204) {
            ctx->pc = 0x2A824Cu;
            goto label_2a824c;
        }
    }
    ctx->pc = 0x2A820Cu;
label_2a820c:
    // 0x2a820c: 0x8fc20004
    ctx->pc = 0x2a820cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a8210: 0x24430001
    ctx->pc = 0x2a8210u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a8214: 0x60102d
    ctx->pc = 0x2a8214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8218: 0xafc20004
    ctx->pc = 0x2a8218u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a821c: 0x3c03000f
    ctx->pc = 0x2a821cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
    // 0x2a8220: 0x34634240
    ctx->pc = 0x2a8220u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16960));
    // 0x2a8224: 0x62102a
    ctx->pc = 0x2a8224u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2a8228: 0x10400006
    ctx->pc = 0x2A8228u;
    {
        const bool branch_taken_0x2a8228 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8228) {
            ctx->pc = 0x2A8244u;
            goto label_2a8244;
        }
    }
    ctx->pc = 0x2A8230u;
    // 0x2a8230: 0x3c04003b
    ctx->pc = 0x2a8230u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a8234: 0x2484f378
    ctx->pc = 0x2a8234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964088));
    // 0x2a8238: 0x3c050080
    ctx->pc = 0x2a8238u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x2a823c: 0xc0b49a6
    ctx->pc = 0x2A823Cu;
    SET_GPR_U32(ctx, 31, 0x2A8244u);
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8244u; }
    }
    if (ctx->pc != 0x2A8244u) { return; }
    ctx->pc = 0x2A8244u;
label_2a8244:
    // 0x2a8244: 0x1000ffea
    ctx->pc = 0x2A8244u;
    {
        const bool branch_taken_0x2a8244 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8244) {
            ctx->pc = 0x2A81F0u;
            goto label_2a81f0;
        }
    }
    ctx->pc = 0x2A824Cu;
label_2a824c:
    // 0x2a824c: 0x3c011001
    ctx->pc = 0x2a824cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x2a8250: 0xac20a020
    ctx->pc = 0x2a8250u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294942752), GPR_U32(ctx, 0)); // MMIO: 0x1000a020
    // 0x2a8254: 0x8fc20008
    ctx->pc = 0x2a8254u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a8258: 0x3c011001
    ctx->pc = 0x2a8258u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x2a825c: 0xac22a030
    ctx->pc = 0x2a825cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294942768), GPR_U32(ctx, 2)); // MMIO: 0x1000a030
    // 0x2a8260: 0x24020004
    ctx->pc = 0x2a8260u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a8264: 0x3c011001
    ctx->pc = 0x2a8264u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x2a8268: 0xac22e010
    ctx->pc = 0x2a8268u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294959120), GPR_U32(ctx, 2)); // MMIO: 0x1000e010
    // 0x2a826c: 0x24020105
    ctx->pc = 0x2a826cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 261));
    // 0x2a8270: 0x3c011001
    ctx->pc = 0x2a8270u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x2a8274: 0xac22a000
    ctx->pc = 0x2a8274u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294942720), GPR_U32(ctx, 2)); // MMIO: 0x1000a000
    // 0x2a8278: 0x8fc20000
    ctx->pc = 0x2a8278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a827c: 0x3c010037
    ctx->pc = 0x2a827cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2a8280: 0xac222950
    ctx->pc = 0x2a8280u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10576), GPR_U32(ctx, 2));
    // 0x2a8284: 0x40024800
    ctx->pc = 0x2a8284u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2a8288: 0x40182d
    ctx->pc = 0x2a8288u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a828c: 0xafc3000c
    ctx->pc = 0x2a828cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 3));
    // 0x2a8290: 0x8fc2000c
    ctx->pc = 0x2a8290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a8294: 0x3c03003a
    ctx->pc = 0x2a8294u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2a8298: 0x8c6320c8
    ctx->pc = 0x2a8298u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8392)));
    // 0x2a829c: 0x431023
    ctx->pc = 0x2a829cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a82a0: 0xafc2000c
    ctx->pc = 0x2a82a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x2a82a4: 0x3c02003a
    ctx->pc = 0x2a82a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2a82a8: 0x8c4220c0
    ctx->pc = 0x2a82a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8384)));
    // 0x2a82ac: 0x8fc3000c
    ctx->pc = 0x2a82acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a82b0: 0x431021
    ctx->pc = 0x2a82b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a82b4: 0x3c01003a
    ctx->pc = 0x2a82b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x2a82b8: 0xac2220c0
    ctx->pc = 0x2a82b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8384), GPR_U32(ctx, 2));
    // 0x2a82bc: 0x3c02003a
    ctx->pc = 0x2a82bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2a82c0: 0x8c4220c4
    ctx->pc = 0x2a82c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8388)));
    // 0x2a82c4: 0x24430001
    ctx->pc = 0x2a82c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a82c8: 0x3c01003a
    ctx->pc = 0x2a82c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x2a82cc: 0xac2320c4
    ctx->pc = 0x2a82ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8388), GPR_U32(ctx, 3));
    // 0x2a82d0: 0x3c0e82d
    ctx->pc = 0x2a82d0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82d4: 0xdfbf0020
    ctx->pc = 0x2a82d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a82d8: 0xdfbe0010
    ctx->pc = 0x2a82d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a82dc: 0x27bd0030
    ctx->pc = 0x2a82dcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a82e0: 0x3e00008
    ctx->pc = 0x2A82E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A81F0u: goto label_2a81f0;
            case 0x2A820Cu: goto label_2a820c;
            case 0x2A8244u: goto label_2a8244;
            case 0x2A824Cu: goto label_2a824c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A82E8u;
}
