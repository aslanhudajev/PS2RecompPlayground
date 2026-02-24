#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ch3dmaCSC
// Address: 0x125870 - 0x1259b8
void _ch3dmaCSC_0x125870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125870u;

    // 0x125870: 0x3c021000
    ctx->pc = 0x125870u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x125874: 0x24030008
    ctx->pc = 0x125874u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x125878: 0x3442e010
    ctx->pc = 0x125878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)57360);
    // 0x12587c: 0x3c050017
    ctx->pc = 0x12587cu;
    SET_GPR_S32(ctx, 5, ((uint32_t)23 << 16));
    // 0x125880: 0xac430000
    ctx->pc = 0x125880u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x125884: 0x3c041000
    ctx->pc = 0x125884u;
    SET_GPR_S32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x125888: 0x3484b020
    ctx->pc = 0x125888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)45088);
    // 0x12588c: 0x8ca221c0
    ctx->pc = 0x12588cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8640)));
    // 0x125890: 0x24420001
    ctx->pc = 0x125890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x125894: 0xaca221c0
    ctx->pc = 0x125894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8640), GPR_U32(ctx, 2));
    // 0x125898: 0x8c830000
    ctx->pc = 0x125898u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x12589c: 0x14600007
    ctx->pc = 0x12589Cu;
    {
        const bool branch_taken_0x12589c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1258A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x12589c) {
            ctx->pc = 0x1258BCu;
            goto label_1258bc;
        }
    }
    ctx->pc = 0x1258A4u;
    // 0x1258a4: 0x3c021000
    ctx->pc = 0x1258a4u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1258a8: 0x3442b000
    ctx->pc = 0x1258a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)45056);
    // 0x1258ac: 0x8c430000
    ctx->pc = 0x1258acu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1258b0: 0x30630100
    ctx->pc = 0x1258b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1258b4: 0x10600005
    ctx->pc = 0x1258B4u;
    {
        const bool branch_taken_0x1258b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1258B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1258b4) {
            ctx->pc = 0x1258CCu;
            goto label_1258cc;
        }
    }
    ctx->pc = 0x1258BCu;
label_1258bc:
    // 0x1258bc: 0x3c030017
    ctx->pc = 0x1258bcu;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x1258c0: 0xac6221b8
    ctx->pc = 0x1258c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8632), GPR_U32(ctx, 2));
    // 0x1258c4: 0x3e00008
    ctx->pc = 0x1258C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1258C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1258BCu: goto label_1258bc;
            case 0x1258CCu: goto label_1258cc;
            case 0x125944u: goto label_125944;
            case 0x1259A8u: goto label_1259a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1258CCu;
label_1258cc:
    // 0x1258cc: 0x3c020075
    ctx->pc = 0x1258ccu;
    SET_GPR_S32(ctx, 2, ((uint32_t)117 << 16));
    // 0x1258d0: 0x8ca321c0
    ctx->pc = 0x1258d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8640)));
    // 0x1258d4: 0x8c44e4d8
    ctx->pc = 0x1258d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294960344)));
    // 0x1258d8: 0x2484ffff
    ctx->pc = 0x1258d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1258dc: 0x64182a
    ctx->pc = 0x1258dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x1258e0: 0x10600018
    ctx->pc = 0x1258E0u;
    {
        const bool branch_taken_0x1258e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1258E4u;
        SET_GPR_S32(ctx, 8, ((uint32_t)117 << 16));
        if (branch_taken_0x1258e0) {
            ctx->pc = 0x125944u;
            goto label_125944;
        }
    }
    ctx->pc = 0x1258E8u;
    // 0x1258e8: 0x3c021000
    ctx->pc = 0x1258e8u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1258ec: 0x8d06e4d4
    ctx->pc = 0x1258ecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 4294960340)));
    // 0x1258f0: 0x3442b010
    ctx->pc = 0x1258f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)45072);
    // 0x1258f4: 0x3404ffc0
    ctx->pc = 0x1258f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)65472);
    // 0x1258f8: 0x3c03000f
    ctx->pc = 0x1258f8u;
    SET_GPR_S32(ctx, 3, ((uint32_t)15 << 16));
    // 0x1258fc: 0xac460000
    ctx->pc = 0x1258fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x125900: 0x24070100
    ctx->pc = 0x125900u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 256));
    // 0x125904: 0x3c011001
    ctx->pc = 0x125904u;
    SET_GPR_S32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x125908: 0xac24b020
    ctx->pc = 0x125908u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 4)); // MMIO: 0x1000b020
    // 0x12590c: 0x3c051000
    ctx->pc = 0x12590cu;
    SET_GPR_S32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x125910: 0x3c047000
    ctx->pc = 0x125910u;
    SET_GPR_S32(ctx, 4, ((uint32_t)28672 << 16));
    // 0x125914: 0x3463fc00
    ctx->pc = 0x125914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)64512);
    // 0x125918: 0x3c020fff
    ctx->pc = 0x125918u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x12591c: 0xc33021
    ctx->pc = 0x12591cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x125920: 0x3c011001
    ctx->pc = 0x125920u;
    SET_GPR_S32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x125924: 0xac27b000
    ctx->pc = 0x125924u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 7)); // MMIO: 0x1000b000
    // 0x125928: 0x34a52000
    ctx->pc = 0x125928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)8192);
    // 0x12592c: 0x348403ff
    ctx->pc = 0x12592cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)1023);
    // 0x125930: 0x3442ffff
    ctx->pc = 0x125930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65535);
    // 0x125934: 0xaca40000
    ctx->pc = 0x125934u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x125938: 0xc23024
    ctx->pc = 0x125938u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12593c: 0x1000001a
    ctx->pc = 0x12593Cu;
    {
        const bool branch_taken_0x12593c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125940u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294960340), GPR_U32(ctx, 6));
        if (branch_taken_0x12593c) {
            ctx->pc = 0x1259A8u;
            goto label_1259a8;
        }
    }
    ctx->pc = 0x125944u;
label_125944:
    // 0x125944: 0x8ca221c0
    ctx->pc = 0x125944u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8640)));
    // 0x125948: 0x14440017
    ctx->pc = 0x125948u;
    {
        const bool branch_taken_0x125948 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x12594Cu;
        SET_GPR_S32(ctx, 3, ((uint32_t)117 << 16));
        if (branch_taken_0x125948) {
            ctx->pc = 0x1259A8u;
            goto label_1259a8;
        }
    }
    ctx->pc = 0x125950u;
    // 0x125950: 0x8ca521c0
    ctx->pc = 0x125950u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 8640)));
    // 0x125954: 0x3c060075
    ctx->pc = 0x125954u;
    SET_GPR_S32(ctx, 6, ((uint32_t)117 << 16));
    // 0x125958: 0x8cc4e4d0
    ctx->pc = 0x125958u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4294960336)));
    // 0x12595c: 0x51280
    ctx->pc = 0x12595cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 10));
    // 0x125960: 0x8c67e4d4
    ctx->pc = 0x125960u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 4294960340)));
    // 0x125964: 0x451023
    ctx->pc = 0x125964u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x125968: 0x3c031000
    ctx->pc = 0x125968u;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x12596c: 0x822023
    ctx->pc = 0x12596cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x125970: 0x3463b010
    ctx->pc = 0x125970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)45072);
    // 0x125974: 0xacc4e4d0
    ctx->pc = 0x125974u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294960336), GPR_U32(ctx, 4));
    // 0x125978: 0x42980
    ctx->pc = 0x125978u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 6));
    // 0x12597c: 0xac670000
    ctx->pc = 0x12597cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7)); // MMIO: 0x10000000
    // 0x125980: 0x24060100
    ctx->pc = 0x125980u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x125984: 0x3c011001
    ctx->pc = 0x125984u;
    SET_GPR_S32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x125988: 0xac25b020
    ctx->pc = 0x125988u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 5)); // MMIO: 0x1000b020
    // 0x12598c: 0x3c021000
    ctx->pc = 0x12598cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x125990: 0x3c037000
    ctx->pc = 0x125990u;
    SET_GPR_S32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x125994: 0x3c011001
    ctx->pc = 0x125994u;
    SET_GPR_S32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x125998: 0xac26b000
    ctx->pc = 0x125998u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 6)); // MMIO: 0x1000b000
    // 0x12599c: 0x832025
    ctx->pc = 0x12599cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1259a0: 0x34422000
    ctx->pc = 0x1259a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)8192);
    // 0x1259a4: 0xac440000
    ctx->pc = 0x1259a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1259a8:
    // 0x1259a8: 0xf
    ctx->pc = 0x1259a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1259ac: 0x42000038
    ctx->pc = 0x1259acu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1259b0: 0x3e00008
    ctx->pc = 0x1259B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1259B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1258BCu: goto label_1258bc;
            case 0x1258CCu: goto label_1258cc;
            case 0x125944u: goto label_125944;
            case 0x1259A8u: goto label_1259a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1259B8u;
}
