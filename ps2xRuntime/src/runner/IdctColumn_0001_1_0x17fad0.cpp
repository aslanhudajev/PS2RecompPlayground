#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IdctColumn_0001_1
// Address: 0x17fad0 - 0x17fc18
void IdctColumn_0001_1_0x17fad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IdctColumn_0001_1");


    ctx->pc = 0x17fad0u;

    // 0x17fad0: 0x27bdffe0
    ctx->pc = 0x17fad0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17fad4: 0x3c0f0001
    ctx->pc = 0x17fad4u;
    SET_GPR_U32(ctx, 15, ((uint32_t)1 << 16));
    // 0x17fad8: 0xffb00000
    ctx->pc = 0x17fad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17fadc: 0x3c190002
    ctx->pc = 0x17fadcu;
    SET_GPR_U32(ctx, 25, ((uint32_t)2 << 16));
    // 0x17fae0: 0xffb10010
    ctx->pc = 0x17fae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17fae4: 0x3c10ffff
    ctx->pc = 0x17fae4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)65535 << 16));
    // 0x17fae8: 0x3c18fffe
    ctx->pc = 0x17fae8u;
    SET_GPR_U32(ctx, 24, ((uint32_t)65534 << 16));
    // 0x17faec: 0x80602d
    ctx->pc = 0x17faecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17faf0: 0x24110008
    ctx->pc = 0x17faf0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 8));
    // 0x17faf4: 0x35ef6a0a
    ctx->pc = 0x17faf4u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), 27146));
    // 0x17faf8: 0x36103c11
    ctx->pc = 0x17faf8u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 15377));
    // 0x17fafc: 0x37399cf6
    ctx->pc = 0x17fafcu;
    SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 25), 40182));
    // 0x17fb00: 0x3718eae8
    ctx->pc = 0x17fb00u;
    SET_GPR_U32(ctx, 24, OR32(GPR_U32(ctx, 24), 60136));
    // 0x17fb04: 0x10000003
    ctx->pc = 0x17FB04u;
    {
        const bool branch_taken_0x17fb04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17FB08u;
        SET_GPR_U32(ctx, 14, ((uint32_t)32 << 16));
        if (branch_taken_0x17fb04) {
            ctx->pc = 0x17FB14u;
            goto label_17fb14;
        }
    }
    ctx->pc = 0x17FB0Cu;
    // 0x17fb0c: 0x0
    ctx->pc = 0x17fb0cu;
    // NOP
label_17fb10:
    // 0x17fb10: 0x258c0002
    ctx->pc = 0x17fb10u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 2));
label_17fb14:
    // 0x17fb14: 0x85890050
    ctx->pc = 0x17fb14u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x17fb18: 0x2631ffff
    ctx->pc = 0x17fb18u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17fb1c: 0x858a0010
    ctx->pc = 0x17fb1cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x17fb20: 0x85840030
    ctx->pc = 0x17fb20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x17fb24: 0x85850070
    ctx->pc = 0x17fb24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 112)));
    // 0x17fb28: 0x1241823
    ctx->pc = 0x17fb28u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x17fb2c: 0x858d0060
    ctx->pc = 0x17fb2cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 96)));
    // 0x17fb30: 0x1455821
    ctx->pc = 0x17fb30u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x17fb34: 0x892021
    ctx->pc = 0x17fb34u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x17fb38: 0xaa2823
    ctx->pc = 0x17fb38u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x17fb3c: 0x794018
    ctx->pc = 0x17fb3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x17fb40: 0x1645023
    ctx->pc = 0x17fb40u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x17fb44: 0x651821
    ctx->pc = 0x17fb44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17fb48: 0x71af3818
    ctx->pc = 0x17fb48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x17fb4c: 0x8b2021
    ctx->pc = 0x17fb4cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x17fb50: 0x70705818
    ctx->pc = 0x17fb50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x17fb54: 0xd1400
    ctx->pc = 0x17fb54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 13), 16));
    // 0x17fb58: 0xb84818
    ctx->pc = 0x17fb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)(uint32_t)result); }
    // 0x17fb5c: 0x42400
    ctx->pc = 0x17fb5cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x17fb60: 0x14f5018
    ctx->pc = 0x17fb60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)(uint32_t)result); }
    // 0x17fb64: 0x26823
    ctx->pc = 0x17fb64u;
    SET_GPR_U32(ctx, 13, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x17fb68: 0xe23821
    ctx->pc = 0x17fb68u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x17fb6c: 0x441823
    ctx->pc = 0x17fb6cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17fb70: 0x441021
    ctx->pc = 0x17fb70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17fb74: 0x6e1821
    ctx->pc = 0x17fb74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x17fb78: 0x12b2821
    ctx->pc = 0x17fb78u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x17fb7c: 0x4e1021
    ctx->pc = 0x17fb7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x17fb80: 0xa42823
    ctx->pc = 0x17fb80u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17fb84: 0x73023
    ctx->pc = 0x17fb84u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x17fb88: 0x1455023
    ctx->pc = 0x17fb88u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x17fb8c: 0x1684821
    ctx->pc = 0x17fb8cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x17fb90: 0x31d83
    ctx->pc = 0x17fb90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 22));
    // 0x17fb94: 0x21583
    ctx->pc = 0x17fb94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x17fb98: 0xc54023
    ctx->pc = 0x17fb98u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17fb9c: 0x12a4823
    ctx->pc = 0x17fb9cu;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x17fba0: 0xea2023
    ctx->pc = 0x17fba0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x17fba4: 0xa5830070
    ctx->pc = 0x17fba4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 112), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fba8: 0xa5820000
    ctx->pc = 0x17fba8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fbac: 0x1a91823
    ctx->pc = 0x17fbacu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x17fbb0: 0xc53021
    ctx->pc = 0x17fbb0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17fbb4: 0xea3821
    ctx->pc = 0x17fbb4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x17fbb8: 0x1a91021
    ctx->pc = 0x17fbb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x17fbbc: 0xce3021
    ctx->pc = 0x17fbbcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x17fbc0: 0xee3821
    ctx->pc = 0x17fbc0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
    // 0x17fbc4: 0x4e1021
    ctx->pc = 0x17fbc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x17fbc8: 0x6e1821
    ctx->pc = 0x17fbc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x17fbcc: 0x8e2021
    ctx->pc = 0x17fbccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x17fbd0: 0x10e4021
    ctx->pc = 0x17fbd0u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x17fbd4: 0x63583
    ctx->pc = 0x17fbd4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 22));
    // 0x17fbd8: 0x73d83
    ctx->pc = 0x17fbd8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 22));
    // 0x17fbdc: 0x21583
    ctx->pc = 0x17fbdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x17fbe0: 0x31d83
    ctx->pc = 0x17fbe0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 22));
    // 0x17fbe4: 0x42583
    ctx->pc = 0x17fbe4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 22));
    // 0x17fbe8: 0x84583
    ctx->pc = 0x17fbe8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 22));
    // 0x17fbec: 0xa5860010
    ctx->pc = 0x17fbecu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 16), (uint16_t)GPR_U32(ctx, 6));
    // 0x17fbf0: 0xa5870020
    ctx->pc = 0x17fbf0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 32), (uint16_t)GPR_U32(ctx, 7));
    // 0x17fbf4: 0xa5820030
    ctx->pc = 0x17fbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fbf8: 0xa5830040
    ctx->pc = 0x17fbf8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fbfc: 0xa5840050
    ctx->pc = 0x17fbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 80), (uint16_t)GPR_U32(ctx, 4));
    // 0x17fc00: 0x1620ffc3
    ctx->pc = 0x17FC00u;
    {
        const bool branch_taken_0x17fc00 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x17FC04u;
        WRITE16(ADD32(GPR_U32(ctx, 12), 96), (uint16_t)GPR_U32(ctx, 8));
        if (branch_taken_0x17fc00) {
            ctx->pc = 0x17FB10u;
            goto label_17fb10;
        }
    }
    ctx->pc = 0x17FC08u;
    // 0x17fc08: 0xdfb10010
    ctx->pc = 0x17fc08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fc0c: 0xdfb00000
    ctx->pc = 0x17fc0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fc10: 0x3e00008
    ctx->pc = 0x17FC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FC14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FB10u: goto label_17fb10;
            case 0x17FB14u: goto label_17fb14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FC18u;
}
