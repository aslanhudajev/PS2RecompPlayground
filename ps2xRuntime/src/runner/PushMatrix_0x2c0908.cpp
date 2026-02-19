#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <iostream>

// Function: PushMatrix
// Address: 0x2c0908 - 0x2c0a14
void PushMatrix_0x2c0908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c0908u;
    std::cerr << "[PushMatrix] ENTRY ra=0x" << std::hex << GPR_U32(ctx, 31) << " s0=0x" << GPR_U32(ctx, 16) << " s2=0x" << GPR_U32(ctx, 18) << " sp=0x" << GPR_U32(ctx, 29) << "\n" << std::dec;

    // 0x2c0908: 0x27bdffc0
    ctx->pc = 0x2c0908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c090c: 0xffbf0030
    ctx->pc = 0x2c090cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c0910: 0xffb20020
    ctx->pc = 0x2c0910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c0914: 0xffb10010
    ctx->pc = 0x2c0914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c0918: 0xffb00000
    ctx->pc = 0x2c0918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c091c: 0x3c03003d
    ctx->pc = 0x2c091cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c0920: 0x8c62a0f0
    ctx->pc = 0x2c0920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942960)));
    // 0x2c0924: 0x24420001
    ctx->pc = 0x2c0924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c0928: 0xac62a0f0
    ctx->pc = 0x2c0928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942960), GPR_U32(ctx, 2));
    // 0x2c092c: 0x28420040
    ctx->pc = 0x2c092cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 64));
    // 0x2c0930: 0x14400005
    ctx->pc = 0x2C0930u;
    {
        const bool branch_taken_0x2c0930 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C0934u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c0930) {
            ctx->pc = 0x2C0948u;
            goto label_2c0948;
        }
    }
    ctx->pc = 0x2C0938u;
    // 0x2c0938: 0x3c04003b
    ctx->pc = 0x2c0938u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c093c: 0x24846d80
    ctx->pc = 0x2c093cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28032));
    // 0x2c0940: 0xc0b49a6
    ctx->pc = 0x2C0940u;
    SET_GPR_U32(ctx, 31, 0x2C0948u);
    ctx->pc = 0x2C0944u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0948u; }
    }
    if (ctx->pc != 0x2C0948u) {
        std::cerr << "[PushMatrix] EXIT(early) ctx->pc=0x" << std::hex << ctx->pc << " ra=0x" << GPR_U32(ctx, 31) << " s0=0x" << GPR_U32(ctx, 16) << " s2=0x" << GPR_U32(ctx, 18) << "\n" << std::dec;
        return;
    }
    ctx->pc = 0x2C0948u;
label_2c0948:
    // 0x2c0948: 0x3c02003d
    ctx->pc = 0x2c0948u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c094c: 0x2451b100
    ctx->pc = 0x2c094cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294947072));
    // 0x2c0950: 0x3c12003d
    ctx->pc = 0x2c0950u;
    SET_GPR_U32(ctx, 18, ((uint32_t)61 << 16));
    // 0x2c0954: 0x8e44a0f0
    ctx->pc = 0x2c0954u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294942960)));
    // 0x2c0958: 0x41880
    ctx->pc = 0x2c0958u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c095c: 0x711821
    ctx->pc = 0x2c095cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2c0960: 0x2482ffff
    ctx->pc = 0x2c0960u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c0964: 0x21080
    ctx->pc = 0x2c0964u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0968: 0x511021
    ctx->pc = 0x2c0968u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c096c: 0x8c420000
    ctx->pc = 0x2c096cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0970: 0xac620000
    ctx->pc = 0x2c0970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2c0974: 0x8e020060
    ctx->pc = 0x2c0974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2c0978: 0x30420008
    ctx->pc = 0x2c0978u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x2c097c: 0x10400010
    ctx->pc = 0x2C097Cu;
    {
        const bool branch_taken_0x2c097c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0980u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 6));
        if (branch_taken_0x2c097c) {
            ctx->pc = 0x2C09C0u;
            goto label_2c09c0;
        }
    }
    ctx->pc = 0x2C0984u;
    // 0x2c0984: 0x3c04003d
    ctx->pc = 0x2c0984u;
    SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
    // 0x2c0988: 0x2484a0c0
    ctx->pc = 0x2c0988u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942912));
    // 0x2c098c: 0x24860040
    ctx->pc = 0x2c098cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 64));
    // 0x2c0990: 0x442021
    ctx->pc = 0x2c0990u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0994: 0x200282d
    ctx->pc = 0x2c0994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0998: 0x463021
    ctx->pc = 0x2c0998u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c099c: 0xc0b56da
    ctx->pc = 0x2C099Cu;
    SET_GPR_U32(ctx, 31, 0x2C09A4u);
    ctx->pc = 0x2C09A0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x2D5B68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulMat4Scale_0x2d5b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C09A4u; }
    }
    if (ctx->pc != 0x2C09A4u) {
        std::cerr << "[PushMatrix] EXIT(early) ctx->pc=0x" << std::hex << ctx->pc << " ra=0x" << GPR_U32(ctx, 31) << " s0=0x" << GPR_U32(ctx, 16) << " s2=0x" << GPR_U32(ctx, 18) << "\n" << std::dec;
        return;
    }
    ctx->pc = 0x2C09A4u;
    // 0x2c09a4: 0x8e43a0f0
    ctx->pc = 0x2c09a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294942960)));
    // 0x2c09a8: 0x31880
    ctx->pc = 0x2c09a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c09ac: 0x711821
    ctx->pc = 0x2c09acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2c09b0: 0x8c620000
    ctx->pc = 0x2c09b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c09b4: 0x34420002
    ctx->pc = 0x2c09b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2c09b8: 0x10000010
    ctx->pc = 0x2C09B8u;
    {
        const bool branch_taken_0x2c09b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C09BCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2c09b8) {
            ctx->pc = 0x2C09FCu;
            goto label_2c09fc;
        }
    }
    ctx->pc = 0x2C09C0u;
label_2c09c0:
    // 0x2c09c0: 0x3c02003d
    ctx->pc = 0x2c09c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c09c4: 0x8c42a0f0
    ctx->pc = 0x2c09c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294942960)));
    // 0x2c09c8: 0x21180
    ctx->pc = 0x2c09c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x2c09cc: 0x3c04003d
    ctx->pc = 0x2c09ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
    // 0x2c09d0: 0x2484a0c0
    ctx->pc = 0x2c09d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942912));
    // 0x2c09d4: 0x24860040
    ctx->pc = 0x2c09d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 64));
    // 0x2c09d8: 0x442021
    ctx->pc = 0x2c09d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c09dc: 0x200282d
    ctx->pc = 0x2c09dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c09e0: 0x463021
    ctx->pc = 0x2c09e0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c09e4: 0xdfbf0030
    ctx->pc = 0x2c09e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c09e8: 0xdfb20020
    ctx->pc = 0x2c09e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c09ec: 0xdfb10010
    ctx->pc = 0x2c09ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c09f0: 0xdfb00000
    ctx->pc = 0x2c09f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c09f4: 0x80b56b8
    ctx->pc = 0x2C09F4u;
    ctx->pc = 0x2C09F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D5AE0u;
    MulMat4_0x2d5ae0(rdram, ctx, runtime); return;
    ctx->pc = 0x2C09FCu;
label_2c09fc:
    // 0x2c09fc: 0xdfbf0030
    ctx->pc = 0x2c09fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0a00: 0xdfb20020
    ctx->pc = 0x2c0a00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0a04: 0xdfb10010
    ctx->pc = 0x2c0a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0a08: 0xdfb00000
    ctx->pc = 0x2c0a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0a0c: 0x3e00008
    ctx->pc = 0x2C0A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0A10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C0948u: goto label_2c0948;
            case 0x2C09C0u: goto label_2c09c0;
            case 0x2C09FCu: goto label_2c09fc;
            default: break;
        }
        std::cerr << "[PushMatrix] EXIT ra=0x" << std::hex << jumpTarget << " s0=0x" << GPR_U32(ctx, 16) << " s2=0x" << GPR_U32(ctx, 18) << " sp=0x" << GPR_U32(ctx, 29) << "\n" << std::dec;
        return;
    }
    ctx->pc = 0x2C0A14u;
}
