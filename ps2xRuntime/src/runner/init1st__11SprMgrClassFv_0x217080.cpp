#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init1st__11SprMgrClassFv
// Address: 0x217080 - 0x21718c
void init1st__11SprMgrClassFv_0x217080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init1st__11SprMgrClassFv");


    ctx->pc = 0x217080u;

    // 0x217080: 0x3c03004a
    ctx->pc = 0x217080u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x217084: 0x70002628
    ctx->pc = 0x217084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x217088: 0x2465f560
    ctx->pc = 0x217088u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294964576));
label_21708c:
    // 0x21708c: 0xa0a00000
    ctx->pc = 0x21708cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x217090: 0xa0a00001
    ctx->pc = 0x217090u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x217094: 0xa0a00002
    ctx->pc = 0x217094u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x217098: 0xa0a00003
    ctx->pc = 0x217098u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x21709c: 0xa0a00004
    ctx->pc = 0x21709cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2170a0: 0xa0a00005
    ctx->pc = 0x2170a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2170a4: 0xa0a00006
    ctx->pc = 0x2170a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2170a8: 0x24840008
    ctx->pc = 0x2170a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x2170ac: 0xa0a00007
    ctx->pc = 0x2170acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x2170b0: 0x288301cf
    ctx->pc = 0x2170b0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 463));
    // 0x2170b4: 0x1460fff5
    ctx->pc = 0x2170B4u;
    {
        const bool branch_taken_0x2170b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2170B8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x2170b4) {
            ctx->pc = 0x21708Cu;
            goto label_21708c;
        }
    }
    ctx->pc = 0x2170BCu;
    // 0x2170bc: 0x288101d7
    ctx->pc = 0x2170bcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 471));
    // 0x2170c0: 0x1020000b
    ctx->pc = 0x2170C0u;
    {
        const bool branch_taken_0x2170c0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x2170c0) {
            ctx->pc = 0x2170F0u;
            goto label_2170f0;
        }
    }
    ctx->pc = 0x2170C8u;
    // 0x2170c8: 0x3c03004a
    ctx->pc = 0x2170c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x2170cc: 0x2463f560
    ctx->pc = 0x2170ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294964576));
    // 0x2170d0: 0x642821
    ctx->pc = 0x2170d0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2170d4:
    // 0x2170d4: 0x24840001
    ctx->pc = 0x2170d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2170d8: 0xa0a00000
    ctx->pc = 0x2170d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2170dc: 0x288301d7
    ctx->pc = 0x2170dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 471));
    // 0x2170e0: 0x24a50001
    ctx->pc = 0x2170e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2170e4: 0x0
    ctx->pc = 0x2170e4u;
    // NOP
    // 0x2170e8: 0x1460fffa
    ctx->pc = 0x2170E8u;
    {
        const bool branch_taken_0x2170e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2170e8) {
            ctx->pc = 0x2170D4u;
            goto label_2170d4;
        }
    }
    ctx->pc = 0x2170F0u;
label_2170f0:
    // 0x2170f0: 0x3c030029
    ctx->pc = 0x2170f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x2170f4: 0x2467ade0
    ctx->pc = 0x2170f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 4294946272));
    // 0x2170f8: 0x3c03004a
    ctx->pc = 0x2170f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x2170fc: 0x2465f560
    ctx->pc = 0x2170fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294964576));
    // 0x217100: 0x24060001
    ctx->pc = 0x217100u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x217104: 0x10000004
    ctx->pc = 0x217104u;
    {
        const bool branch_taken_0x217104 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x217108u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x217104) {
            ctx->pc = 0x217118u;
            goto label_217118;
        }
    }
    ctx->pc = 0x21710Cu;
label_21710c:
    // 0x21710c: 0xa42021
    ctx->pc = 0x21710cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x217110: 0xa0860000
    ctx->pc = 0x217110u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x217114: 0x24e70002
    ctx->pc = 0x217114u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
label_217118:
    // 0x217118: 0x84e40000
    ctx->pc = 0x217118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21711c: 0x0
    ctx->pc = 0x21711cu;
    // NOP
    // 0x217120: 0x1483fffa
    ctx->pc = 0x217120u;
    {
        const bool branch_taken_0x217120 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x217120) {
            ctx->pc = 0x21710Cu;
            goto label_21710c;
        }
    }
    ctx->pc = 0x217128u;
    // 0x217128: 0x3c03004a
    ctx->pc = 0x217128u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x21712c: 0x70002e28
    ctx->pc = 0x21712cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x217130: 0x2464f738
    ctx->pc = 0x217130u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294965048));
label_217134:
    // 0x217134: 0xac800044
    ctx->pc = 0x217134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x217138: 0xac800048
    ctx->pc = 0x217138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x21713c: 0xac800094
    ctx->pc = 0x21713cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x217140: 0xac800098
    ctx->pc = 0x217140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x217144: 0xac8000e4
    ctx->pc = 0x217144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x217148: 0xac8000e8
    ctx->pc = 0x217148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x21714c: 0xac800134
    ctx->pc = 0x21714cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
    // 0x217150: 0xac800138
    ctx->pc = 0x217150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 0));
    // 0x217154: 0xac800184
    ctx->pc = 0x217154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 0));
    // 0x217158: 0xac800188
    ctx->pc = 0x217158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 392), GPR_U32(ctx, 0));
    // 0x21715c: 0xac8001d4
    ctx->pc = 0x21715cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 0));
    // 0x217160: 0xac8001d8
    ctx->pc = 0x217160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 0));
    // 0x217164: 0xac800224
    ctx->pc = 0x217164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 0));
    // 0x217168: 0xac800228
    ctx->pc = 0x217168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 0));
    // 0x21716c: 0xac800274
    ctx->pc = 0x21716cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 0));
    // 0x217170: 0x24a50008
    ctx->pc = 0x217170u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x217174: 0xac800278
    ctx->pc = 0x217174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 632), GPR_U32(ctx, 0));
    // 0x217178: 0x28a312d8
    ctx->pc = 0x217178u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 4824));
    // 0x21717c: 0x1460ffed
    ctx->pc = 0x21717Cu;
    {
        const bool branch_taken_0x21717c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x217180u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 640));
        if (branch_taken_0x21717c) {
            ctx->pc = 0x217134u;
            goto label_217134;
        }
    }
    ctx->pc = 0x217184u;
    // 0x217184: 0x3e00008
    ctx->pc = 0x217184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21708Cu: goto label_21708c;
            case 0x2170D4u: goto label_2170d4;
            case 0x2170F0u: goto label_2170f0;
            case 0x21710Cu: goto label_21710c;
            case 0x217118u: goto label_217118;
            case 0x217134u: goto label_217134;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21718Cu;
}
