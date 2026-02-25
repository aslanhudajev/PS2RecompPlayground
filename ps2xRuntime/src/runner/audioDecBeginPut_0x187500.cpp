#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: audioDecBeginPut
// Address: 0x187500 - 0x1875c0
void audioDecBeginPut_0x187500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("audioDecBeginPut_0x187500");
#endif

    ctx->pc = 0x187500u;

    // 0x187500: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x187500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x187504: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x187504u;
    {
        const bool branch_taken_0x187504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187504) {
            ctx->pc = 0x187540u;
            goto label_187540;
        }
    }
    ctx->pc = 0x18750Cu;
    // 0x18750c: 0x8c89002c  lw          $t1, 0x2C($a0)
    ctx->pc = 0x18750cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x187510: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x187510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x187514: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x187514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x187518: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x187518u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x18751c: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x18751cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x187520: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x187520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x187524: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x187524u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x187528: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x187528u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x18752c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x187530: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x187530u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x187534: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x187534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x187538: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x187538u;
    {
        const bool branch_taken_0x187538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18753Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187538u;
            // 0x18753c: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187538) {
            ctx->pc = 0x1875B8u;
            goto label_1875b8;
        }
    }
    ctx->pc = 0x187540u;
label_187540:
    // 0x187540: 0x8c8a003c  lw          $t2, 0x3C($a0)
    ctx->pc = 0x187540u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x187544: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x187544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x187548: 0x8c890034  lw          $t1, 0x34($a0)
    ctx->pc = 0x187548u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x18754c: 0x1435823  subu        $t3, $t2, $v1
    ctx->pc = 0x18754cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x187550: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x187550u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x187554: 0x6b182a  slt         $v1, $v1, $t3
    ctx->pc = 0x187554u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x187558: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x187558u;
    {
        const bool branch_taken_0x187558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187558) {
            ctx->pc = 0x187580u;
            goto label_187580;
        }
    }
    ctx->pc = 0x187560u;
    // 0x187560: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x187560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x187564: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x187564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x187568: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x187568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x18756c: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x18756cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x187570: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x187570u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x187574: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x187574u;
    {
        const bool branch_taken_0x187574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187574u;
            // 0x187578: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187574) {
            ctx->pc = 0x1875B8u;
            goto label_1875b8;
        }
    }
    ctx->pc = 0x18757Cu;
    // 0x18757c: 0x0  nop
    ctx->pc = 0x18757cu;
    // NOP
label_187580:
    // 0x187580: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x187580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x187584: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x187584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x187588: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x187588u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x18758c: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x18758cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x187590: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x187590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x187594: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x187594u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x187598: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x187598u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x18759c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1875a0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1875a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1875a4: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x1875a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1875a8: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1875a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1875ac: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1875acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1875b0: 0x1631823  subu        $v1, $t3, $v1
    ctx->pc = 0x1875b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1875b4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1875b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_1875b8:
    // 0x1875b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1875B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187540u: goto label_187540;
            case 0x187580u: goto label_187580;
            case 0x1875B8u: goto label_1875b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1875C0u;
}
