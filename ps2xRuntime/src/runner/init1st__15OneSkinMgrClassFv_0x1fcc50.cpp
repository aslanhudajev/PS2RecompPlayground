#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init1st__15OneSkinMgrClassFv
// Address: 0x1fcc50 - 0x1fcd98
void init1st__15OneSkinMgrClassFv_0x1fcc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init1st__15OneSkinMgrClassFv");


    ctx->pc = 0x1fcc50u;

    // 0x1fcc50: 0x70003628
    ctx->pc = 0x1fcc50u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1fcc54:
    // 0x1fcc54: 0x8c85000c
    ctx->pc = 0x1fcc54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fcc58: 0x24c60001
    ctx->pc = 0x1fcc58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fcc5c: 0x28c3004a
    ctx->pc = 0x1fcc5cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 74));
    // 0x1fcc60: 0xaca00000
    ctx->pc = 0x1fcc60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1fcc64: 0x8c85000c
    ctx->pc = 0x1fcc64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fcc68: 0x24a5000c
    ctx->pc = 0x1fcc68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12));
    // 0x1fcc6c: 0x1460fff9
    ctx->pc = 0x1FCC6Cu;
    {
        const bool branch_taken_0x1fcc6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FCC70u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        if (branch_taken_0x1fcc6c) {
            ctx->pc = 0x1FCC54u;
            goto label_1fcc54;
        }
    }
    ctx->pc = 0x1FCC74u;
    // 0x1fcc74: 0x3c030051
    ctx->pc = 0x1fcc74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1fcc78: 0x246425f0
    ctx->pc = 0x1fcc78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 9712));
    // 0x1fcc7c: 0x3c030052
    ctx->pc = 0x1fcc7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x1fcc80: 0x70003628
    ctx->pc = 0x1fcc80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fcc84: 0x246594d0
    ctx->pc = 0x1fcc84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294939856));
label_1fcc88:
    // 0x1fcc88: 0xac800000
    ctx->pc = 0x1fcc88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fcc8c: 0xa0a00000
    ctx->pc = 0x1fcc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcc90: 0xac800004
    ctx->pc = 0x1fcc90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1fcc94: 0xa0a00001
    ctx->pc = 0x1fcc94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcc98: 0xac800008
    ctx->pc = 0x1fcc98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1fcc9c: 0xa0a00002
    ctx->pc = 0x1fcc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcca0: 0xac80000c
    ctx->pc = 0x1fcca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1fcca4: 0xa0a00003
    ctx->pc = 0x1fcca4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcca8: 0xac800010
    ctx->pc = 0x1fcca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1fccac: 0xa0a00004
    ctx->pc = 0x1fccacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fccb0: 0xac800014
    ctx->pc = 0x1fccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1fccb4: 0xa0a00005
    ctx->pc = 0x1fccb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fccb8: 0xac800018
    ctx->pc = 0x1fccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1fccbc: 0xa0a00006
    ctx->pc = 0x1fccbcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fccc0: 0xac80001c
    ctx->pc = 0x1fccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1fccc4: 0x24c60008
    ctx->pc = 0x1fccc4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x1fccc8: 0xa0a00007
    ctx->pc = 0x1fccc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcccc: 0x28c30386
    ctx->pc = 0x1fccccu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 902));
    // 0x1fccd0: 0x24840020
    ctx->pc = 0x1fccd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x1fccd4: 0x1460ffec
    ctx->pc = 0x1FCCD4u;
    {
        const bool branch_taken_0x1fccd4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FCCD8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x1fccd4) {
            ctx->pc = 0x1FCC88u;
            goto label_1fcc88;
        }
    }
    ctx->pc = 0x1FCCDCu;
    // 0x1fccdc: 0x28c1038e
    ctx->pc = 0x1fccdcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), 910));
    // 0x1fcce0: 0x1020000f
    ctx->pc = 0x1FCCE0u;
    {
        const bool branch_taken_0x1fcce0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fcce0) {
            ctx->pc = 0x1FCD20u;
            goto label_1fcd20;
        }
    }
    ctx->pc = 0x1FCCE8u;
    // 0x1fcce8: 0x3c030051
    ctx->pc = 0x1fcce8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1fccec: 0x62080
    ctx->pc = 0x1fccecu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fccf0: 0x246325f0
    ctx->pc = 0x1fccf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 9712));
    // 0x1fccf4: 0x642021
    ctx->pc = 0x1fccf4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fccf8: 0x3c030052
    ctx->pc = 0x1fccf8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x1fccfc: 0x246394d0
    ctx->pc = 0x1fccfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294939856));
    // 0x1fcd00: 0x662821
    ctx->pc = 0x1fcd00u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1fcd04:
    // 0x1fcd04: 0xac800000
    ctx->pc = 0x1fcd04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fcd08: 0x24c60001
    ctx->pc = 0x1fcd08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fcd0c: 0xa0a00000
    ctx->pc = 0x1fcd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcd10: 0x28c3038e
    ctx->pc = 0x1fcd10u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 910));
    // 0x1fcd14: 0x24840004
    ctx->pc = 0x1fcd14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1fcd18: 0x1460fffa
    ctx->pc = 0x1FCD18u;
    {
        const bool branch_taken_0x1fcd18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FCD1Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x1fcd18) {
            ctx->pc = 0x1FCD04u;
            goto label_1fcd04;
        }
    }
    ctx->pc = 0x1FCD20u;
label_1fcd20:
    // 0x1fcd20: 0x3c030052
    ctx->pc = 0x1fcd20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x1fcd24: 0x70002e28
    ctx->pc = 0x1fcd24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fcd28: 0x24649860
    ctx->pc = 0x1fcd28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294940768));
label_1fcd2c:
    // 0x1fcd2c: 0xa0800000
    ctx->pc = 0x1fcd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcd30: 0xa0800001
    ctx->pc = 0x1fcd30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcd34: 0xa0800002
    ctx->pc = 0x1fcd34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcd38: 0xa0800003
    ctx->pc = 0x1fcd38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcd3c: 0xa0800004
    ctx->pc = 0x1fcd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcd40: 0xa0800005
    ctx->pc = 0x1fcd40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcd44: 0xa0800006
    ctx->pc = 0x1fcd44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcd48: 0x24a50008
    ctx->pc = 0x1fcd48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1fcd4c: 0xa0800007
    ctx->pc = 0x1fcd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcd50: 0x28a3002c
    ctx->pc = 0x1fcd50u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 44));
    // 0x1fcd54: 0x1460fff5
    ctx->pc = 0x1FCD54u;
    {
        const bool branch_taken_0x1fcd54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FCD58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x1fcd54) {
            ctx->pc = 0x1FCD2Cu;
            goto label_1fcd2c;
        }
    }
    ctx->pc = 0x1FCD5Cu;
    // 0x1fcd5c: 0x28a10034
    ctx->pc = 0x1fcd5cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 52));
    // 0x1fcd60: 0x1020000b
    ctx->pc = 0x1FCD60u;
    {
        const bool branch_taken_0x1fcd60 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FCD64u;
        SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
        if (branch_taken_0x1fcd60) {
            ctx->pc = 0x1FCD90u;
            goto label_1fcd90;
        }
    }
    ctx->pc = 0x1FCD68u;
    // 0x1fcd68: 0x24639860
    ctx->pc = 0x1fcd68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940768));
    // 0x1fcd6c: 0x652021
    ctx->pc = 0x1fcd6cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1fcd70:
    // 0x1fcd70: 0x24a50001
    ctx->pc = 0x1fcd70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fcd74: 0xa0800000
    ctx->pc = 0x1fcd74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcd78: 0x28a30034
    ctx->pc = 0x1fcd78u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 52));
    // 0x1fcd7c: 0x24840001
    ctx->pc = 0x1fcd7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fcd80: 0x0
    ctx->pc = 0x1fcd80u;
    // NOP
    // 0x1fcd84: 0x1460fffa
    ctx->pc = 0x1FCD84u;
    {
        const bool branch_taken_0x1fcd84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fcd84) {
            ctx->pc = 0x1FCD70u;
            goto label_1fcd70;
        }
    }
    ctx->pc = 0x1FCD8Cu;
    // 0x1fcd8c: 0x0
    ctx->pc = 0x1fcd8cu;
    // NOP
label_1fcd90:
    // 0x1fcd90: 0x3e00008
    ctx->pc = 0x1FCD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCC54u: goto label_1fcc54;
            case 0x1FCC88u: goto label_1fcc88;
            case 0x1FCD04u: goto label_1fcd04;
            case 0x1FCD20u: goto label_1fcd20;
            case 0x1FCD2Cu: goto label_1fcd2c;
            case 0x1FCD70u: goto label_1fcd70;
            case 0x1FCD90u: goto label_1fcd90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FCD98u;
}
