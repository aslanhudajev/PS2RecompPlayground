#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _updateTempTackData
// Address: 0x1246c0 - 0x1247a0
void _updateTempTackData_0x1246c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_updateTempTackData_0x1246c0");
#endif

    ctx->pc = 0x1246c0u;

    // 0x1246c0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1246c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1246c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1246c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1246c8: 0x8c43197c  lw          $v1, 0x197C($v0)
    ctx->pc = 0x1246c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6524)));
    // 0x1246cc: 0x1064001d  beq         $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1246CCu;
    {
        const bool branch_taken_0x1246cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1246D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1246CCu;
            // 0x1246d0: 0x3c050017  lui         $a1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246cc) {
            ctx->pc = 0x124744u;
            goto label_124744;
        }
    }
    ctx->pc = 0x1246D4u;
    // 0x1246d4: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x1246d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x1246d8: 0x8ca41978  lw          $a0, 0x1978($a1)
    ctx->pc = 0x1246d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6520)));
    // 0x1246dc: 0x8ce32170  lw          $v1, 0x2170($a3)
    ctx->pc = 0x1246dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8560)));
    // 0x1246e0: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1246E0u;
    {
        const bool branch_taken_0x1246e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1246E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1246E0u;
            // 0x1246e4: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246e0) {
            ctx->pc = 0x124744u;
            goto label_124744;
        }
    }
    ctx->pc = 0x1246E8u;
    // 0x1246e8: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x1246e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
    // 0x1246ec: 0x8d02216c  lw          $v0, 0x216C($t0)
    ctx->pc = 0x1246ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8556)));
    // 0x1246f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1246F0u;
    {
        const bool branch_taken_0x1246f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1246F0u;
            // 0x1246f4: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246f0) {
            ctx->pc = 0x124710u;
            goto label_124710;
        }
    }
    ctx->pc = 0x1246F8u;
    // 0x1246f8: 0x3c0a0017  lui         $t2, 0x17
    ctx->pc = 0x1246f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)23 << 16));
    // 0x1246fc: 0xad00216c  sw          $zero, 0x216C($t0)
    ctx->pc = 0x1246fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8556), GPR_U32(ctx, 0));
    // 0x124700: 0x8d422130  lw          $v0, 0x2130($t2)
    ctx->pc = 0x124700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8496)));
    // 0x124704: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x124704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x124708: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x124708u;
    {
        const bool branch_taken_0x124708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12470Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124708u;
            // 0x12470c: 0xad422130  sw          $v0, 0x2130($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 8496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124708) {
            ctx->pc = 0x124714u;
            goto label_124714;
        }
    }
    ctx->pc = 0x124710u;
label_124710:
    // 0x124710: 0x3c0a0017  lui         $t2, 0x17
    ctx->pc = 0x124710u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)23 << 16));
label_124714:
    // 0x124714: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x124714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x124718: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124718u;
    {
        const bool branch_taken_0x124718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12471Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124718u;
            // 0x12471c: 0x3c030017  lui         $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124718) {
            ctx->pc = 0x124734u;
            goto label_124734;
        }
    }
    ctx->pc = 0x124720u;
    // 0x124720: 0x8c622138  lw          $v0, 0x2138($v1)
    ctx->pc = 0x124720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8504)));
    // 0x124724: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124724u;
    {
        const bool branch_taken_0x124724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124724u;
            // 0x124728: 0x8d221978  lw          $v0, 0x1978($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 6520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124724) {
            ctx->pc = 0x124738u;
            goto label_124738;
        }
    }
    ctx->pc = 0x12472Cu;
    // 0x12472c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124730: 0xacc2216c  sw          $v0, 0x216C($a2)
    ctx->pc = 0x124730u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8556), GPR_U32(ctx, 2));
label_124734:
    // 0x124734: 0x8d221978  lw          $v0, 0x1978($t1)
    ctx->pc = 0x124734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 6520)));
label_124738:
    // 0x124738: 0xac602138  sw          $zero, 0x2138($v1)
    ctx->pc = 0x124738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8504), GPR_U32(ctx, 0));
    // 0x12473c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12473Cu;
    {
        const bool branch_taken_0x12473c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12473Cu;
            // 0x124740: 0xace22170  sw          $v0, 0x2170($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12473c) {
            ctx->pc = 0x12474Cu;
            goto label_12474c;
        }
    }
    ctx->pc = 0x124744u;
label_124744:
    // 0x124744: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x124744u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
    // 0x124748: 0x3c0a0017  lui         $t2, 0x17
    ctx->pc = 0x124748u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)23 << 16));
label_12474c:
    // 0x12474c: 0x8d432130  lw          $v1, 0x2130($t2)
    ctx->pc = 0x12474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8496)));
    // 0x124750: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x124750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x124754: 0x8ca41978  lw          $a0, 0x1978($a1)
    ctx->pc = 0x124754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6520)));
    // 0x124758: 0x8d02216c  lw          $v0, 0x216C($t0)
    ctx->pc = 0x124758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8556)));
    // 0x12475c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x12475cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x124760: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x124760u;
    {
        const bool branch_taken_0x124760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124760u;
            // 0x124764: 0xacc51a38  sw          $a1, 0x1A38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6712), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124760) {
            ctx->pc = 0x124784u;
            goto label_124784;
        }
    }
    ctx->pc = 0x124768u;
    // 0x124768: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x124768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x12476c: 0x8c622170  lw          $v0, 0x2170($v1)
    ctx->pc = 0x12476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8560)));
    // 0x124770: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x124770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x124774: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x124774u;
    {
        const bool branch_taken_0x124774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124774) {
            ctx->pc = 0x124778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124774u;
            // 0x124778: 0x3c050017  lui         $a1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124788u;
            goto label_124788;
        }
    }
    ctx->pc = 0x12477Cu;
    // 0x12477c: 0x24a20400  addiu       $v0, $a1, 0x400
    ctx->pc = 0x12477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x124780: 0xacc21a38  sw          $v0, 0x1A38($a2)
    ctx->pc = 0x124780u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6712), GPR_U32(ctx, 2));
label_124784:
    // 0x124784: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x124784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
label_124788:
    // 0x124788: 0x8cc41a38  lw          $a0, 0x1A38($a2)
    ctx->pc = 0x124788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 6712)));
    // 0x12478c: 0x8ca22134  lw          $v0, 0x2134($a1)
    ctx->pc = 0x12478cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8500)));
    // 0x124790: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x124790u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x124794: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x124794u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x124798: 0x3e00008  jr          $ra
    ctx->pc = 0x124798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12479Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124798u;
            // 0x12479c: 0xaca22134  sw          $v0, 0x2134($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124710u: goto label_124710;
            case 0x124714u: goto label_124714;
            case 0x124734u: goto label_124734;
            case 0x124738u: goto label_124738;
            case 0x124744u: goto label_124744;
            case 0x12474Cu: goto label_12474c;
            case 0x124784u: goto label_124784;
            case 0x124788u: goto label_124788;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1247A0u;
}
