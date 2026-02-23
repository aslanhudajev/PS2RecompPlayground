#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitMbTypeBpic
// Address: 0x18aa00 - 0x18abec
void mpvvlc_InitMbTypeBpic_0x18aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitMbTypeBpic");


    ctx->pc = 0x18aa00u;

    // 0x18aa00: 0x3c020024
    ctx->pc = 0x18aa00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18aa04: 0x24041f00
    ctx->pc = 0x18aa04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7936));
    // 0x18aa08: 0x24421fb8
    ctx->pc = 0x18aa08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8120));
    // 0x18aa0c: 0x182d
    ctx->pc = 0x18aa0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18aa10:
    // 0x18aa10: 0xa4440000
    ctx->pc = 0x18aa10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18aa14: 0x2463ffff
    ctx->pc = 0x18aa14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18aa18: 0x24420002
    ctx->pc = 0x18aa18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18aa1c: 0x0
    ctx->pc = 0x18aa1cu;
    // NOP
    // 0x18aa20: 0x0
    ctx->pc = 0x18aa20u;
    // NOP
    // 0x18aa24: 0x461fffa
    ctx->pc = 0x18AA24u;
    {
        const bool branch_taken_0x18aa24 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18aa24) {
            ctx->pc = 0x18AA10u;
            goto label_18aa10;
        }
    }
    ctx->pc = 0x18AA2Cu;
    // 0x18aa2c: 0x24041106
    ctx->pc = 0x18aa2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4358));
    // 0x18aa30: 0x182d
    ctx->pc = 0x18aa30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa34: 0x0
    ctx->pc = 0x18aa34u;
    // NOP
label_18aa38:
    // 0x18aa38: 0xa4440000
    ctx->pc = 0x18aa38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18aa3c: 0x2463ffff
    ctx->pc = 0x18aa3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18aa40: 0x24420002
    ctx->pc = 0x18aa40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18aa44: 0x0
    ctx->pc = 0x18aa44u;
    // NOP
    // 0x18aa48: 0x0
    ctx->pc = 0x18aa48u;
    // NOP
    // 0x18aa4c: 0x461fffa
    ctx->pc = 0x18AA4Cu;
    {
        const bool branch_taken_0x18aa4c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18aa4c) {
            ctx->pc = 0x18AA38u;
            goto label_18aa38;
        }
    }
    ctx->pc = 0x18AA54u;
    // 0x18aa54: 0x24041606
    ctx->pc = 0x18aa54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5638));
    // 0x18aa58: 0x182d
    ctx->pc = 0x18aa58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa5c: 0x0
    ctx->pc = 0x18aa5cu;
    // NOP
label_18aa60:
    // 0x18aa60: 0xa4440000
    ctx->pc = 0x18aa60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18aa64: 0x2463ffff
    ctx->pc = 0x18aa64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18aa68: 0x24420002
    ctx->pc = 0x18aa68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18aa6c: 0x0
    ctx->pc = 0x18aa6cu;
    // NOP
    // 0x18aa70: 0x0
    ctx->pc = 0x18aa70u;
    // NOP
    // 0x18aa74: 0x461fffa
    ctx->pc = 0x18AA74u;
    {
        const bool branch_taken_0x18aa74 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18aa74) {
            ctx->pc = 0x18AA60u;
            goto label_18aa60;
        }
    }
    ctx->pc = 0x18AA7Cu;
    // 0x18aa7c: 0x24041a06
    ctx->pc = 0x18aa7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6662));
    // 0x18aa80: 0x182d
    ctx->pc = 0x18aa80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa84: 0x0
    ctx->pc = 0x18aa84u;
    // NOP
label_18aa88:
    // 0x18aa88: 0xa4440000
    ctx->pc = 0x18aa88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18aa8c: 0x2463ffff
    ctx->pc = 0x18aa8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18aa90: 0x24420002
    ctx->pc = 0x18aa90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18aa94: 0x0
    ctx->pc = 0x18aa94u;
    // NOP
    // 0x18aa98: 0x0
    ctx->pc = 0x18aa98u;
    // NOP
    // 0x18aa9c: 0x461fffa
    ctx->pc = 0x18AA9Cu;
    {
        const bool branch_taken_0x18aa9c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18aa9c) {
            ctx->pc = 0x18AA88u;
            goto label_18aa88;
        }
    }
    ctx->pc = 0x18AAA4u;
    // 0x18aaa4: 0x24041e05
    ctx->pc = 0x18aaa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7685));
    // 0x18aaa8: 0x24030001
    ctx->pc = 0x18aaa8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18aaac: 0x0
    ctx->pc = 0x18aaacu;
    // NOP
label_18aab0:
    // 0x18aab0: 0xa4440000
    ctx->pc = 0x18aab0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18aab4: 0x2463ffff
    ctx->pc = 0x18aab4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18aab8: 0x24420002
    ctx->pc = 0x18aab8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18aabc: 0x0
    ctx->pc = 0x18aabcu;
    // NOP
    // 0x18aac0: 0x0
    ctx->pc = 0x18aac0u;
    // NOP
    // 0x18aac4: 0x461fffa
    ctx->pc = 0x18AAC4u;
    {
        const bool branch_taken_0x18aac4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18aac4) {
            ctx->pc = 0x18AAB0u;
            goto label_18aab0;
        }
    }
    ctx->pc = 0x18AACCu;
    // 0x18aacc: 0x24040105
    ctx->pc = 0x18aaccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 261));
    // 0x18aad0: 0x24030001
    ctx->pc = 0x18aad0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18aad4: 0x0
    ctx->pc = 0x18aad4u;
    // NOP
label_18aad8:
    // 0x18aad8: 0xa4440000
    ctx->pc = 0x18aad8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18aadc: 0x2463ffff
    ctx->pc = 0x18aadcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18aae0: 0x24420002
    ctx->pc = 0x18aae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18aae4: 0x0
    ctx->pc = 0x18aae4u;
    // NOP
    // 0x18aae8: 0x0
    ctx->pc = 0x18aae8u;
    // NOP
    // 0x18aaec: 0x461fffa
    ctx->pc = 0x18AAECu;
    {
        const bool branch_taken_0x18aaec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18aaec) {
            ctx->pc = 0x18AAD8u;
            goto label_18aad8;
        }
    }
    ctx->pc = 0x18AAF4u;
    // 0x18aaf4: 0x24040804
    ctx->pc = 0x18aaf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2052));
    // 0x18aaf8: 0x24030003
    ctx->pc = 0x18aaf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18aafc: 0x0
    ctx->pc = 0x18aafcu;
    // NOP
label_18ab00:
    // 0x18ab00: 0xa4440000
    ctx->pc = 0x18ab00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18ab04: 0x2463ffff
    ctx->pc = 0x18ab04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ab08: 0x24420002
    ctx->pc = 0x18ab08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18ab0c: 0x0
    ctx->pc = 0x18ab0cu;
    // NOP
    // 0x18ab10: 0x0
    ctx->pc = 0x18ab10u;
    // NOP
    // 0x18ab14: 0x461fffa
    ctx->pc = 0x18AB14u;
    {
        const bool branch_taken_0x18ab14 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ab14) {
            ctx->pc = 0x18AB00u;
            goto label_18ab00;
        }
    }
    ctx->pc = 0x18AB1Cu;
    // 0x18ab1c: 0x24040a04
    ctx->pc = 0x18ab1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2564));
    // 0x18ab20: 0x24030003
    ctx->pc = 0x18ab20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18ab24: 0x0
    ctx->pc = 0x18ab24u;
    // NOP
label_18ab28:
    // 0x18ab28: 0xa4440000
    ctx->pc = 0x18ab28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18ab2c: 0x2463ffff
    ctx->pc = 0x18ab2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ab30: 0x24420002
    ctx->pc = 0x18ab30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18ab34: 0x0
    ctx->pc = 0x18ab34u;
    // NOP
    // 0x18ab38: 0x0
    ctx->pc = 0x18ab38u;
    // NOP
    // 0x18ab3c: 0x461fffa
    ctx->pc = 0x18AB3Cu;
    {
        const bool branch_taken_0x18ab3c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ab3c) {
            ctx->pc = 0x18AB28u;
            goto label_18ab28;
        }
    }
    ctx->pc = 0x18AB44u;
    // 0x18ab44: 0x24040403
    ctx->pc = 0x18ab44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1027));
    // 0x18ab48: 0x24030007
    ctx->pc = 0x18ab48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18ab4c: 0x0
    ctx->pc = 0x18ab4cu;
    // NOP
label_18ab50:
    // 0x18ab50: 0xa4440000
    ctx->pc = 0x18ab50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18ab54: 0x2463ffff
    ctx->pc = 0x18ab54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ab58: 0x24420002
    ctx->pc = 0x18ab58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18ab5c: 0x0
    ctx->pc = 0x18ab5cu;
    // NOP
    // 0x18ab60: 0x0
    ctx->pc = 0x18ab60u;
    // NOP
    // 0x18ab64: 0x461fffa
    ctx->pc = 0x18AB64u;
    {
        const bool branch_taken_0x18ab64 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ab64) {
            ctx->pc = 0x18AB50u;
            goto label_18ab50;
        }
    }
    ctx->pc = 0x18AB6Cu;
    // 0x18ab6c: 0x24040603
    ctx->pc = 0x18ab6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1539));
    // 0x18ab70: 0x24030007
    ctx->pc = 0x18ab70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18ab74: 0x0
    ctx->pc = 0x18ab74u;
    // NOP
label_18ab78:
    // 0x18ab78: 0xa4440000
    ctx->pc = 0x18ab78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18ab7c: 0x2463ffff
    ctx->pc = 0x18ab7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ab80: 0x24420002
    ctx->pc = 0x18ab80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18ab84: 0x0
    ctx->pc = 0x18ab84u;
    // NOP
    // 0x18ab88: 0x0
    ctx->pc = 0x18ab88u;
    // NOP
    // 0x18ab8c: 0x461fffa
    ctx->pc = 0x18AB8Cu;
    {
        const bool branch_taken_0x18ab8c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ab8c) {
            ctx->pc = 0x18AB78u;
            goto label_18ab78;
        }
    }
    ctx->pc = 0x18AB94u;
    // 0x18ab94: 0x24040c02
    ctx->pc = 0x18ab94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3074));
    // 0x18ab98: 0x2403000f
    ctx->pc = 0x18ab98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18ab9c: 0x0
    ctx->pc = 0x18ab9cu;
    // NOP
label_18aba0:
    // 0x18aba0: 0xa4440000
    ctx->pc = 0x18aba0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18aba4: 0x2463ffff
    ctx->pc = 0x18aba4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18aba8: 0x24420002
    ctx->pc = 0x18aba8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18abac: 0x0
    ctx->pc = 0x18abacu;
    // NOP
    // 0x18abb0: 0x0
    ctx->pc = 0x18abb0u;
    // NOP
    // 0x18abb4: 0x461fffa
    ctx->pc = 0x18ABB4u;
    {
        const bool branch_taken_0x18abb4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18abb4) {
            ctx->pc = 0x18ABA0u;
            goto label_18aba0;
        }
    }
    ctx->pc = 0x18ABBCu;
    // 0x18abbc: 0x24040e02
    ctx->pc = 0x18abbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3586));
    // 0x18abc0: 0x2403000f
    ctx->pc = 0x18abc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18abc4: 0x0
    ctx->pc = 0x18abc4u;
    // NOP
label_18abc8:
    // 0x18abc8: 0xa4440000
    ctx->pc = 0x18abc8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18abcc: 0x2463ffff
    ctx->pc = 0x18abccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18abd0: 0x24420002
    ctx->pc = 0x18abd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18abd4: 0x0
    ctx->pc = 0x18abd4u;
    // NOP
    // 0x18abd8: 0x0
    ctx->pc = 0x18abd8u;
    // NOP
    // 0x18abdc: 0x461fffa
    ctx->pc = 0x18ABDCu;
    {
        const bool branch_taken_0x18abdc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18abdc) {
            ctx->pc = 0x18ABC8u;
            goto label_18abc8;
        }
    }
    ctx->pc = 0x18ABE4u;
    // 0x18abe4: 0x3e00008
    ctx->pc = 0x18ABE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18AA10u: goto label_18aa10;
            case 0x18AA38u: goto label_18aa38;
            case 0x18AA60u: goto label_18aa60;
            case 0x18AA88u: goto label_18aa88;
            case 0x18AAB0u: goto label_18aab0;
            case 0x18AAD8u: goto label_18aad8;
            case 0x18AB00u: goto label_18ab00;
            case 0x18AB28u: goto label_18ab28;
            case 0x18AB50u: goto label_18ab50;
            case 0x18AB78u: goto label_18ab78;
            case 0x18ABA0u: goto label_18aba0;
            case 0x18ABC8u: goto label_18abc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18ABECu;
}
