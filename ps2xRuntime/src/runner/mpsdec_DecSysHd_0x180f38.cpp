#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpsdec_DecSysHd
// Address: 0x180f38 - 0x181564
void mpsdec_DecSysHd_0x180f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpsdec_DecSysHd");


    ctx->pc = 0x180f38u;

    // 0x180f38: 0x27bdffd0
    ctx->pc = 0x180f38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180f3c: 0x2403fffc
    ctx->pc = 0x180f3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x180f40: 0xffb10010
    ctx->pc = 0x180f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x180f44: 0x24a20004
    ctx->pc = 0x180f44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4));
    // 0x180f48: 0xffbf0020
    ctx->pc = 0x180f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x180f4c: 0x433824
    ctx->pc = 0x180f4cu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180f50: 0xffb00000
    ctx->pc = 0x180f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180f54: 0x24e2fffc
    ctx->pc = 0x180f54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x180f58: 0x80502d
    ctx->pc = 0x180f58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f5c: 0xa21023
    ctx->pc = 0x180f5cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x180f60: 0x80e80000
    ctx->pc = 0x180f60u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x180f64: 0x248c0
    ctx->pc = 0x180f64u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 2), 3));
    // 0x180f68: 0x24e70001
    ctx->pc = 0x180f68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x180f6c: 0xc0882d
    ctx->pc = 0x180f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f70: 0x90e30000
    ctx->pc = 0x180f70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x180f74: 0x84200
    ctx->pc = 0x180f74u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x180f78: 0x24e70001
    ctx->pc = 0x180f78u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x180f7c: 0x90e40000
    ctx->pc = 0x180f7cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x180f80: 0x1034025
    ctx->pc = 0x180f80u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x180f84: 0x24e70001
    ctx->pc = 0x180f84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x180f88: 0x84200
    ctx->pc = 0x180f88u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x180f8c: 0x90e20000
    ctx->pc = 0x180f8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x180f90: 0x1044025
    ctx->pc = 0x180f90u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x180f94: 0x24e70001
    ctx->pc = 0x180f94u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x180f98: 0x84200
    ctx->pc = 0x180f98u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x180f9c: 0x80e60000
    ctx->pc = 0x180f9cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x180fa0: 0x1024025
    ctx->pc = 0x180fa0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x180fa4: 0x24e70001
    ctx->pc = 0x180fa4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x180fa8: 0x1284004
    ctx->pc = 0x180fa8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 9) & 0x1F));
    // 0x180fac: 0x90e30000
    ctx->pc = 0x180facu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x180fb0: 0x63200
    ctx->pc = 0x180fb0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x180fb4: 0x24e70001
    ctx->pc = 0x180fb4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x180fb8: 0x29240010
    ctx->pc = 0x180fb8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 9), 16));
    // 0x180fbc: 0xc33025
    ctx->pc = 0x180fbcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x180fc0: 0x90e20000
    ctx->pc = 0x180fc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x180fc4: 0x24e70001
    ctx->pc = 0x180fc4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x180fc8: 0x63200
    ctx->pc = 0x180fc8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x180fcc: 0x90e30000
    ctx->pc = 0x180fccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x180fd0: 0xc23025
    ctx->pc = 0x180fd0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x180fd4: 0x63200
    ctx->pc = 0x180fd4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x180fd8: 0x24e70001
    ctx->pc = 0x180fd8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x180fdc: 0x1480001d
    ctx->pc = 0x180FDCu;
    {
        const bool branch_taken_0x180fdc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x180FE0u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        if (branch_taken_0x180fdc) {
            ctx->pc = 0x181054u;
            goto label_181054;
        }
    }
    ctx->pc = 0x180FE4u;
    // 0x180fe4: 0x2529fff0
    ctx->pc = 0x180fe4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x180fe8: 0x11200008
    ctx->pc = 0x180FE8u;
    {
        const bool branch_taken_0x180fe8 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x180FECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x180fe8) {
            ctx->pc = 0x18100Cu;
            goto label_18100c;
        }
    }
    ctx->pc = 0x180FF0u;
    // 0x180ff0: 0x491023
    ctx->pc = 0x180ff0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x180ff4: 0x461006
    ctx->pc = 0x180ff4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x180ff8: 0x1024025
    ctx->pc = 0x180ff8u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x180ffc: 0x81c02
    ctx->pc = 0x180ffcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 16));
    // 0x181000: 0xad430000
    ctx->pc = 0x181000u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x181004: 0x10000004
    ctx->pc = 0x181004u;
    {
        const bool branch_taken_0x181004 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181008u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
        if (branch_taken_0x181004) {
            ctx->pc = 0x181018u;
            goto label_181018;
        }
    }
    ctx->pc = 0x18100Cu;
label_18100c:
    // 0x18100c: 0x81402
    ctx->pc = 0x18100cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 16));
    // 0x181010: 0xad420000
    ctx->pc = 0x181010u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x181014: 0xc0402d
    ctx->pc = 0x181014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_181018:
    // 0x181018: 0x80e60000
    ctx->pc = 0x181018u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18101c: 0x24e70001
    ctx->pc = 0x18101cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181020: 0x90e20000
    ctx->pc = 0x181020u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181024: 0x63200
    ctx->pc = 0x181024u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181028: 0x24e70001
    ctx->pc = 0x181028u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x18102c: 0xc23025
    ctx->pc = 0x18102cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x181030: 0x90e30000
    ctx->pc = 0x181030u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181034: 0x24e70001
    ctx->pc = 0x181034u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181038: 0x63200
    ctx->pc = 0x181038u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x18103c: 0x90e20000
    ctx->pc = 0x18103cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181040: 0xc33025
    ctx->pc = 0x181040u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181044: 0x63200
    ctx->pc = 0x181044u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181048: 0x24e70001
    ctx->pc = 0x181048u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x18104c: 0x10000005
    ctx->pc = 0x18104Cu;
    {
        const bool branch_taken_0x18104c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181050u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x18104c) {
            ctx->pc = 0x181064u;
            goto label_181064;
        }
    }
    ctx->pc = 0x181054u;
label_181054:
    // 0x181054: 0x81402
    ctx->pc = 0x181054u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 16));
    // 0x181058: 0x25290010
    ctx->pc = 0x181058u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 16));
    // 0x18105c: 0xad420000
    ctx->pc = 0x18105cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x181060: 0x84400
    ctx->pc = 0x181060u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
label_181064:
    // 0x181064: 0x25290001
    ctx->pc = 0x181064u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181068: 0x29220020
    ctx->pc = 0x181068u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 32));
    // 0x18106c: 0x14400011
    ctx->pc = 0x18106Cu;
    {
        const bool branch_taken_0x18106c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181070u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x18106c) {
            ctx->pc = 0x1810B4u;
            goto label_1810b4;
        }
    }
    ctx->pc = 0x181074u;
    // 0x181074: 0x2529ffe0
    ctx->pc = 0x181074u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x181078: 0x1264004
    ctx->pc = 0x181078u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x18107c: 0x80e60000
    ctx->pc = 0x18107cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181080: 0x24e70001
    ctx->pc = 0x181080u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181084: 0x90e20000
    ctx->pc = 0x181084u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181088: 0x63200
    ctx->pc = 0x181088u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x18108c: 0x24e70001
    ctx->pc = 0x18108cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181090: 0xc23025
    ctx->pc = 0x181090u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x181094: 0x90e30000
    ctx->pc = 0x181094u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181098: 0x24e70001
    ctx->pc = 0x181098u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x18109c: 0x63200
    ctx->pc = 0x18109cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1810a0: 0x90e20000
    ctx->pc = 0x1810a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1810a4: 0xc33025
    ctx->pc = 0x1810a4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1810a8: 0x63200
    ctx->pc = 0x1810a8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1810ac: 0x24e70001
    ctx->pc = 0x1810acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1810b0: 0xc23025
    ctx->pc = 0x1810b0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1810b4:
    // 0x1810b4: 0x2922000a
    ctx->pc = 0x1810b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 10));
    // 0x1810b8: 0x1440001d
    ctx->pc = 0x1810B8u;
    {
        const bool branch_taken_0x1810b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1810BCu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 10));
        if (branch_taken_0x1810b8) {
            ctx->pc = 0x181130u;
            goto label_181130;
        }
    }
    ctx->pc = 0x1810C0u;
    // 0x1810c0: 0x2529fff6
    ctx->pc = 0x1810c0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967286));
    // 0x1810c4: 0x11200008
    ctx->pc = 0x1810C4u;
    {
        const bool branch_taken_0x1810c4 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x1810C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
        if (branch_taken_0x1810c4) {
            ctx->pc = 0x1810E8u;
            goto label_1810e8;
        }
    }
    ctx->pc = 0x1810CCu;
    // 0x1810cc: 0x491023
    ctx->pc = 0x1810ccu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1810d0: 0x461006
    ctx->pc = 0x1810d0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x1810d4: 0x1024025
    ctx->pc = 0x1810d4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1810d8: 0x81a82
    ctx->pc = 0x1810d8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 10));
    // 0x1810dc: 0xad430004
    ctx->pc = 0x1810dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x1810e0: 0x10000004
    ctx->pc = 0x1810E0u;
    {
        const bool branch_taken_0x1810e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1810E4u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
        if (branch_taken_0x1810e0) {
            ctx->pc = 0x1810F4u;
            goto label_1810f4;
        }
    }
    ctx->pc = 0x1810E8u;
label_1810e8:
    // 0x1810e8: 0x81282
    ctx->pc = 0x1810e8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 10));
    // 0x1810ec: 0xad420004
    ctx->pc = 0x1810ecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x1810f0: 0xc0402d
    ctx->pc = 0x1810f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1810f4:
    // 0x1810f4: 0x80e60000
    ctx->pc = 0x1810f4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1810f8: 0x24e70001
    ctx->pc = 0x1810f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1810fc: 0x90e20000
    ctx->pc = 0x1810fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181100: 0x63200
    ctx->pc = 0x181100u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181104: 0x24e70001
    ctx->pc = 0x181104u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181108: 0xc23025
    ctx->pc = 0x181108u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18110c: 0x90e30000
    ctx->pc = 0x18110cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181110: 0x24e70001
    ctx->pc = 0x181110u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181114: 0x63200
    ctx->pc = 0x181114u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181118: 0x90e20000
    ctx->pc = 0x181118u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18111c: 0xc33025
    ctx->pc = 0x18111cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181120: 0x63200
    ctx->pc = 0x181120u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181124: 0x24e70001
    ctx->pc = 0x181124u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181128: 0x10000004
    ctx->pc = 0x181128u;
    {
        const bool branch_taken_0x181128 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18112Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x181128) {
            ctx->pc = 0x18113Cu;
            goto label_18113c;
        }
    }
    ctx->pc = 0x181130u;
label_181130:
    // 0x181130: 0x25290016
    ctx->pc = 0x181130u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 22));
    // 0x181134: 0xad420004
    ctx->pc = 0x181134u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x181138: 0x84580
    ctx->pc = 0x181138u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 22));
label_18113c:
    // 0x18113c: 0x25290001
    ctx->pc = 0x18113cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181140: 0x29220020
    ctx->pc = 0x181140u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 32));
    // 0x181144: 0x14400011
    ctx->pc = 0x181144u;
    {
        const bool branch_taken_0x181144 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181148u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x181144) {
            ctx->pc = 0x18118Cu;
            goto label_18118c;
        }
    }
    ctx->pc = 0x18114Cu;
    // 0x18114c: 0x2529ffe0
    ctx->pc = 0x18114cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x181150: 0x1264004
    ctx->pc = 0x181150u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x181154: 0x80e60000
    ctx->pc = 0x181154u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181158: 0x24e70001
    ctx->pc = 0x181158u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x18115c: 0x90e20000
    ctx->pc = 0x18115cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181160: 0x63200
    ctx->pc = 0x181160u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181164: 0x24e70001
    ctx->pc = 0x181164u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181168: 0xc23025
    ctx->pc = 0x181168u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18116c: 0x90e30000
    ctx->pc = 0x18116cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181170: 0x24e70001
    ctx->pc = 0x181170u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181174: 0x63200
    ctx->pc = 0x181174u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181178: 0x90e20000
    ctx->pc = 0x181178u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18117c: 0xc33025
    ctx->pc = 0x18117cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181180: 0x63200
    ctx->pc = 0x181180u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181184: 0x24e70001
    ctx->pc = 0x181184u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181188: 0xc23025
    ctx->pc = 0x181188u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_18118c:
    // 0x18118c: 0x2922001a
    ctx->pc = 0x18118cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 26));
    // 0x181190: 0x1440001d
    ctx->pc = 0x181190u;
    {
        const bool branch_taken_0x181190 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181194u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 26));
        if (branch_taken_0x181190) {
            ctx->pc = 0x181208u;
            goto label_181208;
        }
    }
    ctx->pc = 0x181198u;
    // 0x181198: 0x2529ffe6
    ctx->pc = 0x181198u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967270));
    // 0x18119c: 0x11200008
    ctx->pc = 0x18119Cu;
    {
        const bool branch_taken_0x18119c = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x1811A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x18119c) {
            ctx->pc = 0x1811C0u;
            goto label_1811c0;
        }
    }
    ctx->pc = 0x1811A4u;
    // 0x1811a4: 0x491023
    ctx->pc = 0x1811a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1811a8: 0x461006
    ctx->pc = 0x1811a8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x1811ac: 0x1024025
    ctx->pc = 0x1811acu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1811b0: 0x81e82
    ctx->pc = 0x1811b0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 26));
    // 0x1811b4: 0xad430008
    ctx->pc = 0x1811b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x1811b8: 0x10000004
    ctx->pc = 0x1811B8u;
    {
        const bool branch_taken_0x1811b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1811BCu;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
        if (branch_taken_0x1811b8) {
            ctx->pc = 0x1811CCu;
            goto label_1811cc;
        }
    }
    ctx->pc = 0x1811C0u;
label_1811c0:
    // 0x1811c0: 0x81682
    ctx->pc = 0x1811c0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 26));
    // 0x1811c4: 0xad420008
    ctx->pc = 0x1811c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 2));
    // 0x1811c8: 0xc0402d
    ctx->pc = 0x1811c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1811cc:
    // 0x1811cc: 0x80e60000
    ctx->pc = 0x1811ccu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1811d0: 0x24e70001
    ctx->pc = 0x1811d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1811d4: 0x90e20000
    ctx->pc = 0x1811d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1811d8: 0x63200
    ctx->pc = 0x1811d8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1811dc: 0x24e70001
    ctx->pc = 0x1811dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1811e0: 0xc23025
    ctx->pc = 0x1811e0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1811e4: 0x90e30000
    ctx->pc = 0x1811e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1811e8: 0x24e70001
    ctx->pc = 0x1811e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1811ec: 0x63200
    ctx->pc = 0x1811ecu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1811f0: 0x90e20000
    ctx->pc = 0x1811f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1811f4: 0xc33025
    ctx->pc = 0x1811f4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1811f8: 0x63200
    ctx->pc = 0x1811f8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1811fc: 0x24e70001
    ctx->pc = 0x1811fcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181200: 0x10000004
    ctx->pc = 0x181200u;
    {
        const bool branch_taken_0x181200 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181204u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x181200) {
            ctx->pc = 0x181214u;
            goto label_181214;
        }
    }
    ctx->pc = 0x181208u;
label_181208:
    // 0x181208: 0x25290006
    ctx->pc = 0x181208u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 6));
    // 0x18120c: 0xad420008
    ctx->pc = 0x18120cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 2));
    // 0x181210: 0x84180
    ctx->pc = 0x181210u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 6));
label_181214:
    // 0x181214: 0x817c2
    ctx->pc = 0x181214u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 31));
    // 0x181218: 0x2403001f
    ctx->pc = 0x181218u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x18121c: 0x15230012
    ctx->pc = 0x18121Cu;
    {
        const bool branch_taken_0x18121c = (GPR_U32(ctx, 9) != GPR_U32(ctx, 3));
        ctx->pc = 0x181220u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x18121c) {
            ctx->pc = 0x181268u;
            goto label_181268;
        }
    }
    ctx->pc = 0x181224u;
    // 0x181224: 0xc0402d
    ctx->pc = 0x181224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181228: 0x482d
    ctx->pc = 0x181228u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18122c: 0x80e60000
    ctx->pc = 0x18122cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181230: 0x24e70001
    ctx->pc = 0x181230u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181234: 0x90e20000
    ctx->pc = 0x181234u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181238: 0x63200
    ctx->pc = 0x181238u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x18123c: 0x24e70001
    ctx->pc = 0x18123cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181240: 0xc23025
    ctx->pc = 0x181240u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x181244: 0x90e30000
    ctx->pc = 0x181244u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181248: 0x24e70001
    ctx->pc = 0x181248u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x18124c: 0x63200
    ctx->pc = 0x18124cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181250: 0x90e20000
    ctx->pc = 0x181250u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181254: 0xc33025
    ctx->pc = 0x181254u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181258: 0x63200
    ctx->pc = 0x181258u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x18125c: 0x24e70001
    ctx->pc = 0x18125cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181260: 0x10000003
    ctx->pc = 0x181260u;
    {
        const bool branch_taken_0x181260 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181264u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x181260) {
            ctx->pc = 0x181270u;
            goto label_181270;
        }
    }
    ctx->pc = 0x181268u;
label_181268:
    // 0x181268: 0x25290001
    ctx->pc = 0x181268u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x18126c: 0x84040
    ctx->pc = 0x18126cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
label_181270:
    // 0x181270: 0x817c2
    ctx->pc = 0x181270u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 31));
    // 0x181274: 0x2403001f
    ctx->pc = 0x181274u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x181278: 0x15230012
    ctx->pc = 0x181278u;
    {
        const bool branch_taken_0x181278 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 3));
        ctx->pc = 0x18127Cu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x181278) {
            ctx->pc = 0x1812C4u;
            goto label_1812c4;
        }
    }
    ctx->pc = 0x181280u;
    // 0x181280: 0xc0402d
    ctx->pc = 0x181280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181284: 0x482d
    ctx->pc = 0x181284u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181288: 0x80e60000
    ctx->pc = 0x181288u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18128c: 0x24e70001
    ctx->pc = 0x18128cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181290: 0x90e20000
    ctx->pc = 0x181290u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181294: 0x63200
    ctx->pc = 0x181294u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181298: 0x24e70001
    ctx->pc = 0x181298u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x18129c: 0xc23025
    ctx->pc = 0x18129cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1812a0: 0x90e30000
    ctx->pc = 0x1812a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1812a4: 0x24e70001
    ctx->pc = 0x1812a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1812a8: 0x63200
    ctx->pc = 0x1812a8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1812ac: 0x90e20000
    ctx->pc = 0x1812acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1812b0: 0xc33025
    ctx->pc = 0x1812b0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1812b4: 0x63200
    ctx->pc = 0x1812b4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1812b8: 0x24e70001
    ctx->pc = 0x1812b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1812bc: 0x10000003
    ctx->pc = 0x1812BCu;
    {
        const bool branch_taken_0x1812bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1812C0u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x1812bc) {
            ctx->pc = 0x1812CCu;
            goto label_1812cc;
        }
    }
    ctx->pc = 0x1812C4u;
label_1812c4:
    // 0x1812c4: 0x25290001
    ctx->pc = 0x1812c4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1812c8: 0x84040
    ctx->pc = 0x1812c8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
label_1812cc:
    // 0x1812cc: 0x817c2
    ctx->pc = 0x1812ccu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 31));
    // 0x1812d0: 0x2403001f
    ctx->pc = 0x1812d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x1812d4: 0x15230012
    ctx->pc = 0x1812D4u;
    {
        const bool branch_taken_0x1812d4 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 3));
        ctx->pc = 0x1812D8u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x1812d4) {
            ctx->pc = 0x181320u;
            goto label_181320;
        }
    }
    ctx->pc = 0x1812DCu;
    // 0x1812dc: 0xc0402d
    ctx->pc = 0x1812dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1812e0: 0x482d
    ctx->pc = 0x1812e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1812e4: 0x80e60000
    ctx->pc = 0x1812e4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1812e8: 0x24e70001
    ctx->pc = 0x1812e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1812ec: 0x90e20000
    ctx->pc = 0x1812ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1812f0: 0x63200
    ctx->pc = 0x1812f0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1812f4: 0x24e70001
    ctx->pc = 0x1812f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1812f8: 0xc23025
    ctx->pc = 0x1812f8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1812fc: 0x90e30000
    ctx->pc = 0x1812fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181300: 0x24e70001
    ctx->pc = 0x181300u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181304: 0x63200
    ctx->pc = 0x181304u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181308: 0x90e20000
    ctx->pc = 0x181308u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18130c: 0xc33025
    ctx->pc = 0x18130cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181310: 0x63200
    ctx->pc = 0x181310u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181314: 0x24e70001
    ctx->pc = 0x181314u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181318: 0x10000003
    ctx->pc = 0x181318u;
    {
        const bool branch_taken_0x181318 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18131Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x181318) {
            ctx->pc = 0x181328u;
            goto label_181328;
        }
    }
    ctx->pc = 0x181320u;
label_181320:
    // 0x181320: 0x25290001
    ctx->pc = 0x181320u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181324: 0x84040
    ctx->pc = 0x181324u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
label_181328:
    // 0x181328: 0x817c2
    ctx->pc = 0x181328u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 31));
    // 0x18132c: 0x2403001f
    ctx->pc = 0x18132cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x181330: 0x15230012
    ctx->pc = 0x181330u;
    {
        const bool branch_taken_0x181330 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 3));
        ctx->pc = 0x181334u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x181330) {
            ctx->pc = 0x18137Cu;
            goto label_18137c;
        }
    }
    ctx->pc = 0x181338u;
    // 0x181338: 0xc0402d
    ctx->pc = 0x181338u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18133c: 0x482d
    ctx->pc = 0x18133cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181340: 0x80e60000
    ctx->pc = 0x181340u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181344: 0x24e70001
    ctx->pc = 0x181344u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181348: 0x90e20000
    ctx->pc = 0x181348u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18134c: 0x63200
    ctx->pc = 0x18134cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181350: 0x24e70001
    ctx->pc = 0x181350u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181354: 0xc23025
    ctx->pc = 0x181354u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x181358: 0x90e30000
    ctx->pc = 0x181358u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18135c: 0x24e70001
    ctx->pc = 0x18135cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181360: 0x63200
    ctx->pc = 0x181360u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181364: 0x90e20000
    ctx->pc = 0x181364u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181368: 0xc33025
    ctx->pc = 0x181368u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18136c: 0x63200
    ctx->pc = 0x18136cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181370: 0x24e70001
    ctx->pc = 0x181370u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181374: 0x10000003
    ctx->pc = 0x181374u;
    {
        const bool branch_taken_0x181374 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181378u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x181374) {
            ctx->pc = 0x181384u;
            goto label_181384;
        }
    }
    ctx->pc = 0x18137Cu;
label_18137c:
    // 0x18137c: 0x25290001
    ctx->pc = 0x18137cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181380: 0x84040
    ctx->pc = 0x181380u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
label_181384:
    // 0x181384: 0x25290001
    ctx->pc = 0x181384u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181388: 0x29220020
    ctx->pc = 0x181388u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 32));
    // 0x18138c: 0x14400011
    ctx->pc = 0x18138Cu;
    {
        const bool branch_taken_0x18138c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181390u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x18138c) {
            ctx->pc = 0x1813D4u;
            goto label_1813d4;
        }
    }
    ctx->pc = 0x181394u;
    // 0x181394: 0x2529ffe0
    ctx->pc = 0x181394u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x181398: 0x1264004
    ctx->pc = 0x181398u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x18139c: 0x80e60000
    ctx->pc = 0x18139cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1813a0: 0x24e70001
    ctx->pc = 0x1813a0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1813a4: 0x90e20000
    ctx->pc = 0x1813a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1813a8: 0x63200
    ctx->pc = 0x1813a8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1813ac: 0x24e70001
    ctx->pc = 0x1813acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1813b0: 0xc23025
    ctx->pc = 0x1813b0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1813b4: 0x90e30000
    ctx->pc = 0x1813b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1813b8: 0x24e70001
    ctx->pc = 0x1813b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1813bc: 0x63200
    ctx->pc = 0x1813bcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1813c0: 0x90e20000
    ctx->pc = 0x1813c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1813c4: 0xc33025
    ctx->pc = 0x1813c4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1813c8: 0x63200
    ctx->pc = 0x1813c8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1813cc: 0x24e70001
    ctx->pc = 0x1813ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1813d0: 0xc23025
    ctx->pc = 0x1813d0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1813d4:
    // 0x1813d4: 0x2922001b
    ctx->pc = 0x1813d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 27));
    // 0x1813d8: 0x1440001d
    ctx->pc = 0x1813D8u;
    {
        const bool branch_taken_0x1813d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1813DCu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 27));
        if (branch_taken_0x1813d8) {
            ctx->pc = 0x181450u;
            goto label_181450;
        }
    }
    ctx->pc = 0x1813E0u;
    // 0x1813e0: 0x2529ffe5
    ctx->pc = 0x1813e0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967269));
    // 0x1813e4: 0x11200008
    ctx->pc = 0x1813E4u;
    {
        const bool branch_taken_0x1813e4 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x1813E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1813e4) {
            ctx->pc = 0x181408u;
            goto label_181408;
        }
    }
    ctx->pc = 0x1813ECu;
    // 0x1813ec: 0x491023
    ctx->pc = 0x1813ecu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1813f0: 0x461006
    ctx->pc = 0x1813f0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x1813f4: 0x1024025
    ctx->pc = 0x1813f4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1813f8: 0x81ec2
    ctx->pc = 0x1813f8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 27));
    // 0x1813fc: 0xad43000c
    ctx->pc = 0x1813fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
    // 0x181400: 0x10000004
    ctx->pc = 0x181400u;
    {
        const bool branch_taken_0x181400 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181404u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
        if (branch_taken_0x181400) {
            ctx->pc = 0x181414u;
            goto label_181414;
        }
    }
    ctx->pc = 0x181408u;
label_181408:
    // 0x181408: 0x816c2
    ctx->pc = 0x181408u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 27));
    // 0x18140c: 0xad42000c
    ctx->pc = 0x18140cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
    // 0x181410: 0xc0402d
    ctx->pc = 0x181410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_181414:
    // 0x181414: 0x80e60000
    ctx->pc = 0x181414u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181418: 0x24e70001
    ctx->pc = 0x181418u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x18141c: 0x90e20000
    ctx->pc = 0x18141cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181420: 0x63200
    ctx->pc = 0x181420u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181424: 0x24e70001
    ctx->pc = 0x181424u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181428: 0xc23025
    ctx->pc = 0x181428u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18142c: 0x90e30000
    ctx->pc = 0x18142cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181430: 0x24e70001
    ctx->pc = 0x181430u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181434: 0x63200
    ctx->pc = 0x181434u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181438: 0x90e20000
    ctx->pc = 0x181438u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18143c: 0xc33025
    ctx->pc = 0x18143cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181440: 0x63200
    ctx->pc = 0x181440u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181444: 0x24e70001
    ctx->pc = 0x181444u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181448: 0x10000004
    ctx->pc = 0x181448u;
    {
        const bool branch_taken_0x181448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18144Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x181448) {
            ctx->pc = 0x18145Cu;
            goto label_18145c;
        }
    }
    ctx->pc = 0x181450u;
label_181450:
    // 0x181450: 0x25290005
    ctx->pc = 0x181450u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 5));
    // 0x181454: 0xad42000c
    ctx->pc = 0x181454u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
    // 0x181458: 0x84140
    ctx->pc = 0x181458u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 5));
label_18145c:
    // 0x18145c: 0x25290008
    ctx->pc = 0x18145cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 8));
    // 0x181460: 0x29220020
    ctx->pc = 0x181460u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 32));
    // 0x181464: 0x14400011
    ctx->pc = 0x181464u;
    {
        const bool branch_taken_0x181464 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181468u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
        if (branch_taken_0x181464) {
            ctx->pc = 0x1814ACu;
            goto label_1814ac;
        }
    }
    ctx->pc = 0x18146Cu;
    // 0x18146c: 0x2529ffe0
    ctx->pc = 0x18146cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x181470: 0x1264004
    ctx->pc = 0x181470u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x181474: 0x80e60000
    ctx->pc = 0x181474u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181478: 0x24e70001
    ctx->pc = 0x181478u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x18147c: 0x90e20000
    ctx->pc = 0x18147cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181480: 0x63200
    ctx->pc = 0x181480u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181484: 0x24e70001
    ctx->pc = 0x181484u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181488: 0xc23025
    ctx->pc = 0x181488u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18148c: 0x90e30000
    ctx->pc = 0x18148cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181490: 0x24e70001
    ctx->pc = 0x181490u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181494: 0x63200
    ctx->pc = 0x181494u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x181498: 0x90e20000
    ctx->pc = 0x181498u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18149c: 0xc33025
    ctx->pc = 0x18149cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1814a0: 0x63200
    ctx->pc = 0x1814a0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1814a4: 0x24e70001
    ctx->pc = 0x1814a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1814a8: 0xc23025
    ctx->pc = 0x1814a8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1814ac:
    // 0x1814ac: 0x5010018
    ctx->pc = 0x1814ACu;
    {
        const bool branch_taken_0x1814ac = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1814B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 7));
        if (branch_taken_0x1814ac) {
            ctx->pc = 0x181510u;
            goto label_181510;
        }
    }
    ctx->pc = 0x1814B4u;
    // 0x1814b4: 0x25290018
    ctx->pc = 0x1814b4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 24));
label_1814b8:
    // 0x1814b8: 0x29220020
    ctx->pc = 0x1814b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 32));
    // 0x1814bc: 0x14400011
    ctx->pc = 0x1814BCu;
    {
        const bool branch_taken_0x1814bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1814C0u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 24));
        if (branch_taken_0x1814bc) {
            ctx->pc = 0x181504u;
            goto label_181504;
        }
    }
    ctx->pc = 0x1814C4u;
    // 0x1814c4: 0x2529ffe0
    ctx->pc = 0x1814c4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x1814c8: 0x1264004
    ctx->pc = 0x1814c8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x1814cc: 0x80e60000
    ctx->pc = 0x1814ccu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1814d0: 0x24e70001
    ctx->pc = 0x1814d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1814d4: 0x90e20000
    ctx->pc = 0x1814d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1814d8: 0x63200
    ctx->pc = 0x1814d8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1814dc: 0x24e70001
    ctx->pc = 0x1814dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1814e0: 0xc23025
    ctx->pc = 0x1814e0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1814e4: 0x90e30000
    ctx->pc = 0x1814e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1814e8: 0x24e70001
    ctx->pc = 0x1814e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1814ec: 0x63200
    ctx->pc = 0x1814ecu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1814f0: 0x90e20000
    ctx->pc = 0x1814f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1814f4: 0xc33025
    ctx->pc = 0x1814f4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1814f8: 0x63200
    ctx->pc = 0x1814f8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1814fc: 0x24e70001
    ctx->pc = 0x1814fcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x181500: 0xc23025
    ctx->pc = 0x181500u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_181504:
    // 0x181504: 0x502ffec
    ctx->pc = 0x181504u;
    {
        const bool branch_taken_0x181504 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x181504) {
            ctx->pc = 0x181508u;
            SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 24));
            ctx->pc = 0x1814B8u;
            goto label_1814b8;
        }
    }
    ctx->pc = 0x18150Cu;
    // 0x18150c: 0x25220007
    ctx->pc = 0x18150cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 7));
label_181510:
    // 0x181510: 0x210c3
    ctx->pc = 0x181510u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x181514: 0x2442fff8
    ctx->pc = 0x181514u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x181518: 0xe28021
    ctx->pc = 0x181518u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x18151c: 0x2051823
    ctx->pc = 0x18151cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x181520: 0x200202d
    ctx->pc = 0x181520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181524: 0xc06086c
    ctx->pc = 0x181524u;
    SET_GPR_U32(ctx, 31, 0x18152Cu);
    ctx->pc = 0x181528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1821B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSDEL_CheckDelim_0x1821b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18152Cu; }
        else if (ctx->pc != 0x18152Cu) { ctx->pc = 0x18152Cu; }
    }
    if (ctx->pc != 0x18152Cu) { return; }
    ctx->pc = 0x18152Cu;
    // 0x18152c: 0x14400009
    ctx->pc = 0x18152Cu;
    {
        const bool branch_taken_0x18152c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181530u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x18152c) {
            ctx->pc = 0x181554u;
            goto label_181554;
        }
    }
    ctx->pc = 0x181534u;
    // 0x181534: 0xc06086c
    ctx->pc = 0x181534u;
    SET_GPR_U32(ctx, 31, 0x18153Cu);
    ctx->pc = 0x181538u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1821B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSDEL_CheckDelim_0x1821b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18153Cu; }
        else if (ctx->pc != 0x18153Cu) { ctx->pc = 0x18153Cu; }
    }
    if (ctx->pc != 0x18153Cu) { return; }
    ctx->pc = 0x18153Cu;
    // 0x18153c: 0x3c030004
    ctx->pc = 0x18153cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
    // 0x181540: 0x14430004
    ctx->pc = 0x181540u;
    {
        const bool branch_taken_0x181540 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x181544u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x181540) {
            ctx->pc = 0x181554u;
            goto label_181554;
        }
    }
    ctx->pc = 0x181548u;
    // 0x181548: 0x8e220000
    ctx->pc = 0x181548u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18154c: 0x24420001
    ctx->pc = 0x18154cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x181550: 0xae220000
    ctx->pc = 0x181550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_181554:
    // 0x181554: 0xdfb10010
    ctx->pc = 0x181554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181558: 0xdfb00000
    ctx->pc = 0x181558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18155c: 0x3e00008
    ctx->pc = 0x18155Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181560u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18100Cu: goto label_18100c;
            case 0x181018u: goto label_181018;
            case 0x181054u: goto label_181054;
            case 0x181064u: goto label_181064;
            case 0x1810B4u: goto label_1810b4;
            case 0x1810E8u: goto label_1810e8;
            case 0x1810F4u: goto label_1810f4;
            case 0x181130u: goto label_181130;
            case 0x18113Cu: goto label_18113c;
            case 0x18118Cu: goto label_18118c;
            case 0x1811C0u: goto label_1811c0;
            case 0x1811CCu: goto label_1811cc;
            case 0x181208u: goto label_181208;
            case 0x181214u: goto label_181214;
            case 0x181268u: goto label_181268;
            case 0x181270u: goto label_181270;
            case 0x1812C4u: goto label_1812c4;
            case 0x1812CCu: goto label_1812cc;
            case 0x181320u: goto label_181320;
            case 0x181328u: goto label_181328;
            case 0x18137Cu: goto label_18137c;
            case 0x181384u: goto label_181384;
            case 0x1813D4u: goto label_1813d4;
            case 0x181408u: goto label_181408;
            case 0x181414u: goto label_181414;
            case 0x181450u: goto label_181450;
            case 0x18145Cu: goto label_18145c;
            case 0x1814ACu: goto label_1814ac;
            case 0x1814B8u: goto label_1814b8;
            case 0x181504u: goto label_181504;
            case 0x181510u: goto label_181510;
            case 0x181554u: goto label_181554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181564u;
}
