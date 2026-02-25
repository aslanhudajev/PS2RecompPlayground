#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ResultDisp
// Address: 0x158160 - 0x158824
void ResultDisp_0x158160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ResultDisp_0x158160");
#endif

    ctx->pc = 0x158160u;

    // 0x158160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x158160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x158164: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15816c: 0x8c232ca8  lw          $v1, 0x2CA8($at)
    ctx->pc = 0x15816cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11432)));
    // 0x158170: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x158170u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x158174: 0x102001a8  beqz        $at, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x158174u;
    {
        const bool branch_taken_0x158174 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x158178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158174u;
            // 0x158178: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158174) {
            ctx->pc = 0x158818u;
            goto label_158818;
        }
    }
    ctx->pc = 0x15817Cu;
    // 0x15817c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15817cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158180: 0x24840f10  addiu       $a0, $a0, 0xF10
    ctx->pc = 0x158180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3856));
    // 0x158184: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x158184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x158188: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x158188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15818c: 0x600008  jr          $v1
    ctx->pc = 0x15818Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158198u: goto label_158198;
            case 0x1581E0u: goto label_1581e0;
            case 0x1583E0u: goto label_1583e0;
            case 0x1584F0u: goto label_1584f0;
            case 0x158748u: goto label_158748;
            case 0x158810u: goto label_158810;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158194u;
    // 0x158194: 0x0  nop
    ctx->pc = 0x158194u;
    // NOP
label_158198:
    // 0x158198: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15819c: 0x8c233508  lw          $v1, 0x3508($at)
    ctx->pc = 0x15819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x1581a0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1581A0u;
    {
        const bool branch_taken_0x1581a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1581A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1581A0u;
            // 0x1581a4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581a0) {
            ctx->pc = 0x1581B8u;
            goto label_1581b8;
        }
    }
    ctx->pc = 0x1581A8u;
    // 0x1581a8: 0x8c232ca0  lw          $v1, 0x2CA0($at)
    ctx->pc = 0x1581a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11424)));
    // 0x1581ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1581acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1581b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1581b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1581b4: 0xac232ca0  sw          $v1, 0x2CA0($at)
    ctx->pc = 0x1581b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11424), GPR_U32(ctx, 3));
label_1581b8:
    // 0x1581b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1581b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1581bc: 0x8c232ca0  lw          $v1, 0x2CA0($at)
    ctx->pc = 0x1581bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11424)));
    // 0x1581c0: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x1581c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1581c4: 0x14200194  bnez        $at, . + 4 + (0x194 << 2)
    ctx->pc = 0x1581C4u;
    {
        const bool branch_taken_0x1581c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1581C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1581C4u;
            // 0x1581c8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581c4) {
            ctx->pc = 0x158818u;
            goto label_158818;
        }
    }
    ctx->pc = 0x1581CCu;
    // 0x1581cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1581ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1581d0: 0xac202ca0  sw          $zero, 0x2CA0($at)
    ctx->pc = 0x1581d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11424), GPR_U32(ctx, 0));
    // 0x1581d4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1581d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1581d8: 0x1000018f  b           . + 4 + (0x18F << 2)
    ctx->pc = 0x1581D8u;
    {
        const bool branch_taken_0x1581d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1581DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1581D8u;
            // 0x1581dc: 0xac232ca8  sw          $v1, 0x2CA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581d8) {
            ctx->pc = 0x158818u;
            goto label_158818;
        }
    }
    ctx->pc = 0x1581E0u;
label_1581e0:
    // 0x1581e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1581e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1581e4: 0xac202c98  sw          $zero, 0x2C98($at)
    ctx->pc = 0x1581e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11416), GPR_U32(ctx, 0));
    // 0x1581e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1581e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1581ec: 0xac202c90  sw          $zero, 0x2C90($at)
    ctx->pc = 0x1581ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11408), GPR_U32(ctx, 0));
    // 0x1581f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1581f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1581f4: 0xac202c9c  sw          $zero, 0x2C9C($at)
    ctx->pc = 0x1581f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11420), GPR_U32(ctx, 0));
    // 0x1581f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1581f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1581fc: 0xac202c94  sw          $zero, 0x2C94($at)
    ctx->pc = 0x1581fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11412), GPR_U32(ctx, 0));
    // 0x158200: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158204: 0xac202c88  sw          $zero, 0x2C88($at)
    ctx->pc = 0x158204u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11400), GPR_U32(ctx, 0));
    // 0x158208: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15820c: 0x8c223530  lw          $v0, 0x3530($at)
    ctx->pc = 0x15820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x158210: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x158210u;
    {
        const bool branch_taken_0x158210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158210u;
            // 0x158214: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158210) {
            ctx->pc = 0x1582E8u;
            goto label_1582e8;
        }
    }
    ctx->pc = 0x158218u;
    // 0x158218: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x158218u;
    SET_GPR_U32(ctx, 31, 0x158220u);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158220u; }
        if (ctx->pc != 0x158220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158220u; }
        if (ctx->pc != 0x158220u) { return; }
    }
    ctx->pc = 0x158220u;
    // 0x158220: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158224: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x158224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x158228: 0x8c263514  lw          $a2, 0x3514($at)
    ctx->pc = 0x158228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x15822c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x15822cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)34953u)));
    // 0x158230: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x158230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x158234: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x158234u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x158238: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15823c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x15823cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x158240: 0x8c252cc8  lw          $a1, 0x2CC8($at)
    ctx->pc = 0x158240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11464)));
    // 0x158244: 0x8cc700e4  lw          $a3, 0xE4($a2)
    ctx->pc = 0x158244u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x158248: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15824c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x15824cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x158250: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x158250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x158254: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x158254u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x158258: 0xac262cc0  sw          $a2, 0x2CC0($at)
    ctx->pc = 0x158258u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11456), GPR_U32(ctx, 6));
    // 0x15825c: 0x8c4700b0  lw          $a3, 0xB0($v0)
    ctx->pc = 0x15825cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x158260: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158264: 0x8c222cc0  lw          $v0, 0x2CC0($at)
    ctx->pc = 0x158264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11456)));
    // 0x158268: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x158268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x15826c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x15826cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x158270: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158274: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x158274u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x158278: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x158278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15827c: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x15827cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x158280: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x158280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x158284: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x158284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x158288: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x158288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15828c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x15828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x158290: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x158290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x158294: 0xac222cb8  sw          $v0, 0x2CB8($at)
    ctx->pc = 0x158294u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11448), GPR_U32(ctx, 2));
    // 0x158298: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15829c: 0x8c222cb8  lw          $v0, 0x2CB8($at)
    ctx->pc = 0x15829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11448)));
    // 0x1582a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1582a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1582a4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1582a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1582a8: 0xac222cb0  sw          $v0, 0x2CB0($at)
    ctx->pc = 0x1582a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11440), GPR_U32(ctx, 2));
    // 0x1582ac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1582acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1582b0: 0x8c252cb0  lw          $a1, 0x2CB0($at)
    ctx->pc = 0x1582b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11440)));
    // 0x1582b4: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1582b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1582b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1582b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1582bc: 0x0  nop
    ctx->pc = 0x1582bcu;
    // NOP
    // 0x1582c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1582c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1582c4: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1582c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1582c8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1582c8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1582cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1582ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1582d0: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1582d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1582d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1582d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1582d8: 0xac222c98  sw          $v0, 0x2C98($at)
    ctx->pc = 0x1582d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11416), GPR_U32(ctx, 2));
    // 0x1582dc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1582dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1582e0: 0x1010  mfhi        $v0
    ctx->pc = 0x1582e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1582e4: 0xac222c90  sw          $v0, 0x2C90($at)
    ctx->pc = 0x1582e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11408), GPR_U32(ctx, 2));
label_1582e8:
    // 0x1582e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1582e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1582ec: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x1582ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x1582f0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1582F0u;
    {
        const bool branch_taken_0x1582f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1582F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1582F0u;
            // 0x1582f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1582f0) {
            ctx->pc = 0x1583C8u;
            goto label_1583c8;
        }
    }
    ctx->pc = 0x1582F8u;
    // 0x1582f8: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x1582F8u;
    SET_GPR_U32(ctx, 31, 0x158300u);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158300u; }
        if (ctx->pc != 0x158300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158300u; }
        if (ctx->pc != 0x158300u) { return; }
    }
    ctx->pc = 0x158300u;
    // 0x158300: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158304: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x158304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x158308: 0x8c263514  lw          $a2, 0x3514($at)
    ctx->pc = 0x158308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x15830c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x15830cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)34953u)));
    // 0x158310: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x158310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x158314: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x158314u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x158318: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15831c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x15831cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x158320: 0x8c252ccc  lw          $a1, 0x2CCC($at)
    ctx->pc = 0x158320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11468)));
    // 0x158324: 0x8cc700e4  lw          $a3, 0xE4($a2)
    ctx->pc = 0x158324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x158328: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15832c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x15832cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x158330: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x158330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x158334: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x158334u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x158338: 0xac262cc4  sw          $a2, 0x2CC4($at)
    ctx->pc = 0x158338u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11460), GPR_U32(ctx, 6));
    // 0x15833c: 0x8c4700b0  lw          $a3, 0xB0($v0)
    ctx->pc = 0x15833cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x158340: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158344: 0x8c222cc4  lw          $v0, 0x2CC4($at)
    ctx->pc = 0x158344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11460)));
    // 0x158348: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x158348u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x15834c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x15834cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x158350: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158354: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x158354u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x158358: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x158358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15835c: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x15835cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x158360: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x158360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x158364: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x158364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x158368: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x158368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15836c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x15836cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x158370: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x158370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x158374: 0xac222cbc  sw          $v0, 0x2CBC($at)
    ctx->pc = 0x158374u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11452), GPR_U32(ctx, 2));
    // 0x158378: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15837c: 0x8c222cbc  lw          $v0, 0x2CBC($at)
    ctx->pc = 0x15837cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11452)));
    // 0x158380: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x158380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x158384: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158388: 0xac222cb4  sw          $v0, 0x2CB4($at)
    ctx->pc = 0x158388u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11444), GPR_U32(ctx, 2));
    // 0x15838c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15838cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158390: 0x8c252cb4  lw          $a1, 0x2CB4($at)
    ctx->pc = 0x158390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11444)));
    // 0x158394: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x158394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x158398: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15839c: 0x0  nop
    ctx->pc = 0x15839cu;
    // NOP
    // 0x1583a0: 0x1010  mfhi        $v0
    ctx->pc = 0x1583a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1583a4: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1583a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1583a8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1583a8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1583ac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1583acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1583b0: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1583b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1583b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1583b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1583b8: 0xac222c9c  sw          $v0, 0x2C9C($at)
    ctx->pc = 0x1583b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11420), GPR_U32(ctx, 2));
    // 0x1583bc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1583bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1583c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1583c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1583c4: 0xac222c94  sw          $v0, 0x2C94($at)
    ctx->pc = 0x1583c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11412), GPR_U32(ctx, 2));
label_1583c8:
    // 0x1583c8: 0xc05d004  jal         func_174010
    ctx->pc = 0x1583C8u;
    SET_GPR_U32(ctx, 31, 0x1583D0u);
    ctx->pc = 0x1583CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1583C8u;
            // 0x1583cc: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1583D0u; }
        if (ctx->pc != 0x1583D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1583D0u; }
        if (ctx->pc != 0x1583D0u) { return; }
    }
    ctx->pc = 0x1583D0u;
    // 0x1583d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1583d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1583d4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1583d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1583d8: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x1583D8u;
    {
        const bool branch_taken_0x1583d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1583DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1583D8u;
            // 0x1583dc: 0xac232ca8  sw          $v1, 0x2CA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583d8) {
            ctx->pc = 0x158818u;
            goto label_158818;
        }
    }
    ctx->pc = 0x1583E0u;
label_1583e0:
    // 0x1583e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1583e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1583e4: 0x8c242c88  lw          $a0, 0x2C88($at)
    ctx->pc = 0x1583e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x1583e8: 0x28810080  slti        $at, $a0, 0x80
    ctx->pc = 0x1583e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1583ec: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1583ECu;
    {
        const bool branch_taken_0x1583ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1583F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1583ECu;
            // 0x1583f0: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583ec) {
            ctx->pc = 0x158408u;
            goto label_158408;
        }
    }
    ctx->pc = 0x1583F4u;
    // 0x1583f4: 0x8c233508  lw          $v1, 0x3508($at)
    ctx->pc = 0x1583f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x1583f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1583F8u;
    {
        const bool branch_taken_0x1583f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1583FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1583F8u;
            // 0x1583fc: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583f8) {
            ctx->pc = 0x158408u;
            goto label_158408;
        }
    }
    ctx->pc = 0x158400u;
    // 0x158400: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158404: 0xac232c88  sw          $v1, 0x2C88($at)
    ctx->pc = 0x158404u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11400), GPR_U32(ctx, 3));
label_158408:
    // 0x158408: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15840c: 0x8c243530  lw          $a0, 0x3530($at)
    ctx->pc = 0x15840cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x158410: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158410u;
    {
        const bool branch_taken_0x158410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x158414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158410u;
            // 0x158414: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158410) {
            ctx->pc = 0x158438u;
            goto label_158438;
        }
    }
    ctx->pc = 0x158418u;
    // 0x158418: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x158418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x15841c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15841Cu;
    {
        const bool branch_taken_0x15841c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15841c) {
            ctx->pc = 0x158438u;
            goto label_158438;
        }
    }
    ctx->pc = 0x158424u;
    // 0x158424: 0xc056328  jal         func_158CA0
    ctx->pc = 0x158424u;
    SET_GPR_U32(ctx, 31, 0x15842Cu);
    ctx->pc = 0x158CA0u;
    if (runtime->hasFunction(0x158CA0u)) {
        auto targetFn = runtime->lookupFunction(0x158CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15842Cu; }
        if (ctx->pc != 0x15842Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultDisp1P2P_0x158ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15842Cu; }
        if (ctx->pc != 0x15842Cu) { return; }
    }
    ctx->pc = 0x15842Cu;
    // 0x15842c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15842Cu;
    {
        const bool branch_taken_0x15842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15842c) {
            ctx->pc = 0x158468u;
            goto label_158468;
        }
    }
    ctx->pc = 0x158434u;
    // 0x158434: 0x0  nop
    ctx->pc = 0x158434u;
    // NOP
label_158438:
    // 0x158438: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x158438u;
    {
        const bool branch_taken_0x158438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x158438) {
            ctx->pc = 0x158450u;
            goto label_158450;
        }
    }
    ctx->pc = 0x158440u;
    // 0x158440: 0xc05620c  jal         func_158830
    ctx->pc = 0x158440u;
    SET_GPR_U32(ctx, 31, 0x158448u);
    ctx->pc = 0x158444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158440u;
            // 0x158444: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158830u;
    if (runtime->hasFunction(0x158830u)) {
        auto targetFn = runtime->lookupFunction(0x158830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158448u; }
        if (ctx->pc != 0x158448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultDispXp_0x158830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158448u; }
        if (ctx->pc != 0x158448u) { return; }
    }
    ctx->pc = 0x158448u;
    // 0x158448: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x158448u;
    {
        const bool branch_taken_0x158448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158448) {
            ctx->pc = 0x158468u;
            goto label_158468;
        }
    }
    ctx->pc = 0x158450u;
label_158450:
    // 0x158450: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158454: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x158454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x158458: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x158458u;
    {
        const bool branch_taken_0x158458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15845Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158458u;
            // 0x15845c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158458) {
            ctx->pc = 0x158468u;
            goto label_158468;
        }
    }
    ctx->pc = 0x158460u;
    // 0x158460: 0xc05620c  jal         func_158830
    ctx->pc = 0x158460u;
    SET_GPR_U32(ctx, 31, 0x158468u);
    ctx->pc = 0x158830u;
    if (runtime->hasFunction(0x158830u)) {
        auto targetFn = runtime->lookupFunction(0x158830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158468u; }
        if (ctx->pc != 0x158468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultDispXp_0x158830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158468u; }
        if (ctx->pc != 0x158468u) { return; }
    }
    ctx->pc = 0x158468u;
label_158468:
    // 0x158468: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15846c: 0x8c233508  lw          $v1, 0x3508($at)
    ctx->pc = 0x15846cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x158470: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x158470u;
    {
        const bool branch_taken_0x158470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158470u;
            // 0x158474: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158470) {
            ctx->pc = 0x158488u;
            goto label_158488;
        }
    }
    ctx->pc = 0x158478u;
    // 0x158478: 0x8c232ca0  lw          $v1, 0x2CA0($at)
    ctx->pc = 0x158478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11424)));
    // 0x15847c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15847cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x158480: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158484: 0xac232ca0  sw          $v1, 0x2CA0($at)
    ctx->pc = 0x158484u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11424), GPR_U32(ctx, 3));
label_158488:
    // 0x158488: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15848c: 0x8c243514  lw          $a0, 0x3514($at)
    ctx->pc = 0x15848cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x158490: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158494: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x158494u;
    {
        const bool branch_taken_0x158494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158494u;
            // 0x158498: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158494) {
            ctx->pc = 0x1584C8u;
            goto label_1584c8;
        }
    }
    ctx->pc = 0x15849Cu;
    // 0x15849c: 0x8c232ca0  lw          $v1, 0x2CA0($at)
    ctx->pc = 0x15849cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11424)));
    // 0x1584a0: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x1584a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1584a4: 0x142000dc  bnez        $at, . + 4 + (0xDC << 2)
    ctx->pc = 0x1584A4u;
    {
        const bool branch_taken_0x1584a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1584a4) {
            ctx->pc = 0x158818u;
            goto label_158818;
        }
    }
    ctx->pc = 0x1584ACu;
    // 0x1584ac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1584acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1584b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1584b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1584b4: 0xac202ca0  sw          $zero, 0x2CA0($at)
    ctx->pc = 0x1584b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11424), GPR_U32(ctx, 0));
    // 0x1584b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1584b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1584bc: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x1584BCu;
    {
        const bool branch_taken_0x1584bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1584C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1584BCu;
            // 0x1584c0: 0xac232ca8  sw          $v1, 0x2CA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584bc) {
            ctx->pc = 0x158818u;
            goto label_158818;
        }
    }
    ctx->pc = 0x1584C4u;
    // 0x1584c4: 0x0  nop
    ctx->pc = 0x1584c4u;
    // NOP
label_1584c8:
    // 0x1584c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1584c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1584cc: 0x8c232ca0  lw          $v1, 0x2CA0($at)
    ctx->pc = 0x1584ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11424)));
    // 0x1584d0: 0x28610079  slti        $at, $v1, 0x79
    ctx->pc = 0x1584d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x1584d4: 0x142000d0  bnez        $at, . + 4 + (0xD0 << 2)
    ctx->pc = 0x1584D4u;
    {
        const bool branch_taken_0x1584d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1584D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1584D4u;
            // 0x1584d8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584d4) {
            ctx->pc = 0x158818u;
            goto label_158818;
        }
    }
    ctx->pc = 0x1584DCu;
    // 0x1584dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1584dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1584e0: 0xac202ca0  sw          $zero, 0x2CA0($at)
    ctx->pc = 0x1584e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11424), GPR_U32(ctx, 0));
    // 0x1584e4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1584e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1584e8: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x1584E8u;
    {
        const bool branch_taken_0x1584e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1584ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1584E8u;
            // 0x1584ec: 0xac232ca8  sw          $v1, 0x2CA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584e8) {
            ctx->pc = 0x158818u;
            goto label_158818;
        }
    }
    ctx->pc = 0x1584F0u;
label_1584f0:
    // 0x1584f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1584f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1584f4: 0x8c242c88  lw          $a0, 0x2C88($at)
    ctx->pc = 0x1584f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x1584f8: 0x28810080  slti        $at, $a0, 0x80
    ctx->pc = 0x1584f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1584fc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1584FCu;
    {
        const bool branch_taken_0x1584fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x158500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1584FCu;
            // 0x158500: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584fc) {
            ctx->pc = 0x158518u;
            goto label_158518;
        }
    }
    ctx->pc = 0x158504u;
    // 0x158504: 0x8c233508  lw          $v1, 0x3508($at)
    ctx->pc = 0x158504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x158508: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x158508u;
    {
        const bool branch_taken_0x158508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15850Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158508u;
            // 0x15850c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158508) {
            ctx->pc = 0x158518u;
            goto label_158518;
        }
    }
    ctx->pc = 0x158510u;
    // 0x158510: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158514: 0xac232c88  sw          $v1, 0x2C88($at)
    ctx->pc = 0x158514u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11400), GPR_U32(ctx, 3));
label_158518:
    // 0x158518: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15851c: 0x8c243530  lw          $a0, 0x3530($at)
    ctx->pc = 0x15851cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x158520: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158520u;
    {
        const bool branch_taken_0x158520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x158524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158520u;
            // 0x158524: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158520) {
            ctx->pc = 0x158548u;
            goto label_158548;
        }
    }
    ctx->pc = 0x158528u;
    // 0x158528: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x158528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x15852c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15852Cu;
    {
        const bool branch_taken_0x15852c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15852c) {
            ctx->pc = 0x158548u;
            goto label_158548;
        }
    }
    ctx->pc = 0x158534u;
    // 0x158534: 0xc056328  jal         func_158CA0
    ctx->pc = 0x158534u;
    SET_GPR_U32(ctx, 31, 0x15853Cu);
    ctx->pc = 0x158CA0u;
    if (runtime->hasFunction(0x158CA0u)) {
        auto targetFn = runtime->lookupFunction(0x158CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15853Cu; }
        if (ctx->pc != 0x15853Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultDisp1P2P_0x158ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15853Cu; }
        if (ctx->pc != 0x15853Cu) { return; }
    }
    ctx->pc = 0x15853Cu;
    // 0x15853c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15853Cu;
    {
        const bool branch_taken_0x15853c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15853c) {
            ctx->pc = 0x158578u;
            goto label_158578;
        }
    }
    ctx->pc = 0x158544u;
    // 0x158544: 0x0  nop
    ctx->pc = 0x158544u;
    // NOP
label_158548:
    // 0x158548: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x158548u;
    {
        const bool branch_taken_0x158548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x158548) {
            ctx->pc = 0x158560u;
            goto label_158560;
        }
    }
    ctx->pc = 0x158550u;
    // 0x158550: 0xc05620c  jal         func_158830
    ctx->pc = 0x158550u;
    SET_GPR_U32(ctx, 31, 0x158558u);
    ctx->pc = 0x158554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158550u;
            // 0x158554: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158830u;
    if (runtime->hasFunction(0x158830u)) {
        auto targetFn = runtime->lookupFunction(0x158830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158558u; }
        if (ctx->pc != 0x158558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultDispXp_0x158830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158558u; }
        if (ctx->pc != 0x158558u) { return; }
    }
    ctx->pc = 0x158558u;
    // 0x158558: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x158558u;
    {
        const bool branch_taken_0x158558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158558) {
            ctx->pc = 0x158578u;
            goto label_158578;
        }
    }
    ctx->pc = 0x158560u;
label_158560:
    // 0x158560: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158564: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x158564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x158568: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x158568u;
    {
        const bool branch_taken_0x158568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15856Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158568u;
            // 0x15856c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158568) {
            ctx->pc = 0x158578u;
            goto label_158578;
        }
    }
    ctx->pc = 0x158570u;
    // 0x158570: 0xc05620c  jal         func_158830
    ctx->pc = 0x158570u;
    SET_GPR_U32(ctx, 31, 0x158578u);
    ctx->pc = 0x158830u;
    if (runtime->hasFunction(0x158830u)) {
        auto targetFn = runtime->lookupFunction(0x158830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158578u; }
        if (ctx->pc != 0x158578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultDispXp_0x158830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158578u; }
        if (ctx->pc != 0x158578u) { return; }
    }
    ctx->pc = 0x158578u;
label_158578:
    // 0x158578: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15857c: 0x8c233508  lw          $v1, 0x3508($at)
    ctx->pc = 0x15857cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x158580: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x158580u;
    {
        const bool branch_taken_0x158580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158580u;
            // 0x158584: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158580) {
            ctx->pc = 0x158678u;
            goto label_158678;
        }
    }
    ctx->pc = 0x158588u;
    // 0x158588: 0x8c233530  lw          $v1, 0x3530($at)
    ctx->pc = 0x158588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x15858c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15858Cu;
    {
        const bool branch_taken_0x15858c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15858Cu;
            // 0x158590: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15858c) {
            ctx->pc = 0x1585D0u;
            goto label_1585d0;
        }
    }
    ctx->pc = 0x158594u;
    // 0x158594: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x158594u;
    SET_GPR_U32(ctx, 31, 0x15859Cu);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15859Cu; }
        if (ctx->pc != 0x15859Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15859Cu; }
        if (ctx->pc != 0x15859Cu) { return; }
    }
    ctx->pc = 0x15859Cu;
    // 0x15859c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15859cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1585a0: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1585a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x1585a4: 0x8c232c98  lw          $v1, 0x2C98($at)
    ctx->pc = 0x1585a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11416)));
    // 0x1585a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1585a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1585ac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1585acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1585b0: 0xac4300a8  sw          $v1, 0xA8($v0)
    ctx->pc = 0x1585b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    // 0x1585b4: 0x8c242cb0  lw          $a0, 0x2CB0($at)
    ctx->pc = 0x1585b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11440)));
    // 0x1585b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1585b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1585bc: 0x8c232c98  lw          $v1, 0x2C98($at)
    ctx->pc = 0x1585bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11416)));
    // 0x1585c0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1585c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1585c4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1585c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1585c8: 0xac232cb0  sw          $v1, 0x2CB0($at)
    ctx->pc = 0x1585c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11440), GPR_U32(ctx, 3));
    // 0x1585cc: 0x0  nop
    ctx->pc = 0x1585ccu;
    // NOP
label_1585d0:
    // 0x1585d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1585d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1585d4: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x1585d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x1585d8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1585D8u;
    {
        const bool branch_taken_0x1585d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1585DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1585D8u;
            // 0x1585dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585d8) {
            ctx->pc = 0x158618u;
            goto label_158618;
        }
    }
    ctx->pc = 0x1585E0u;
    // 0x1585e0: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x1585E0u;
    SET_GPR_U32(ctx, 31, 0x1585E8u);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585E8u; }
        if (ctx->pc != 0x1585E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585E8u; }
        if (ctx->pc != 0x1585E8u) { return; }
    }
    ctx->pc = 0x1585E8u;
    // 0x1585e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1585e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1585ec: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1585ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x1585f0: 0x8c232c9c  lw          $v1, 0x2C9C($at)
    ctx->pc = 0x1585f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11420)));
    // 0x1585f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1585f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1585f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1585f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1585fc: 0xac4300a8  sw          $v1, 0xA8($v0)
    ctx->pc = 0x1585fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    // 0x158600: 0x8c242cb4  lw          $a0, 0x2CB4($at)
    ctx->pc = 0x158600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11444)));
    // 0x158604: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158608: 0x8c232c9c  lw          $v1, 0x2C9C($at)
    ctx->pc = 0x158608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11420)));
    // 0x15860c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x15860cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x158610: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158614: 0xac232cb4  sw          $v1, 0x2CB4($at)
    ctx->pc = 0x158614u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11444), GPR_U32(ctx, 3));
label_158618:
    // 0x158618: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15861c: 0x8c242ca0  lw          $a0, 0x2CA0($at)
    ctx->pc = 0x15861cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11424)));
    // 0x158620: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158620u;
    {
        const bool branch_taken_0x158620 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x158624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158620u;
            // 0x158624: 0x30830003  andi        $v1, $a0, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)3u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158620) {
            ctx->pc = 0x158634u;
            goto label_158634;
        }
    }
    ctx->pc = 0x158628u;
    // 0x158628: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158628u;
    {
        const bool branch_taken_0x158628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158628) {
            ctx->pc = 0x158634u;
            goto label_158634;
        }
    }
    ctx->pc = 0x158630u;
    // 0x158630: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x158630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_158634:
    // 0x158634: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x158634u;
    {
        const bool branch_taken_0x158634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158634u;
            // 0x158638: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158634) {
            ctx->pc = 0x158660u;
            goto label_158660;
        }
    }
    ctx->pc = 0x15863Cu;
    // 0x15863c: 0x8c232cb0  lw          $v1, 0x2CB0($at)
    ctx->pc = 0x15863cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11440)));
    // 0x158640: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x158640u;
    {
        const bool branch_taken_0x158640 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x158640) {
            ctx->pc = 0x158658u;
            goto label_158658;
        }
    }
    ctx->pc = 0x158648u;
    // 0x158648: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15864c: 0x8c232cb4  lw          $v1, 0x2CB4($at)
    ctx->pc = 0x15864cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11444)));
    // 0x158650: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x158650u;
    {
        const bool branch_taken_0x158650 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x158650) {
            ctx->pc = 0x158660u;
            goto label_158660;
        }
    }
    ctx->pc = 0x158658u;
label_158658:
    // 0x158658: 0xc05d110  jal         func_174440
    ctx->pc = 0x158658u;
    SET_GPR_U32(ctx, 31, 0x158660u);
    ctx->pc = 0x15865Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158658u;
            // 0x15865c: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158660u; }
        if (ctx->pc != 0x158660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158660u; }
        if (ctx->pc != 0x158660u) { return; }
    }
    ctx->pc = 0x158660u;
label_158660:
    // 0x158660: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158664: 0x8c232ca0  lw          $v1, 0x2CA0($at)
    ctx->pc = 0x158664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11424)));
    // 0x158668: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x158668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15866c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15866cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158670: 0xac232ca0  sw          $v1, 0x2CA0($at)
    ctx->pc = 0x158670u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11424), GPR_U32(ctx, 3));
    // 0x158674: 0x0  nop
    ctx->pc = 0x158674u;
    // NOP
label_158678:
    // 0x158678: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15867c: 0x8c232ca0  lw          $v1, 0x2CA0($at)
    ctx->pc = 0x15867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11424)));
    // 0x158680: 0x286300f0  slti        $v1, $v1, 0xF0
    ctx->pc = 0x158680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)240) ? 1 : 0);
    // 0x158684: 0x14600064  bnez        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x158684u;
    {
        const bool branch_taken_0x158684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158684u;
            // 0x158688: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158684) {
            ctx->pc = 0x158818u;
            goto label_158818;
        }
    }
    ctx->pc = 0x15868Cu;
    // 0x15868c: 0xc05d110  jal         func_174440
    ctx->pc = 0x15868Cu;
    SET_GPR_U32(ctx, 31, 0x158694u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158694u; }
        if (ctx->pc != 0x158694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158694u; }
        if (ctx->pc != 0x158694u) { return; }
    }
    ctx->pc = 0x158694u;
    // 0x158694: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158698: 0x8c223530  lw          $v0, 0x3530($at)
    ctx->pc = 0x158698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x15869c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15869Cu;
    {
        const bool branch_taken_0x15869c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1586A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15869Cu;
            // 0x1586a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15869c) {
            ctx->pc = 0x1586E0u;
            goto label_1586e0;
        }
    }
    ctx->pc = 0x1586A4u;
    // 0x1586a4: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x1586A4u;
    SET_GPR_U32(ctx, 31, 0x1586ACu);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586ACu; }
        if (ctx->pc != 0x1586ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586ACu; }
        if (ctx->pc != 0x1586ACu) { return; }
    }
    ctx->pc = 0x1586ACu;
    // 0x1586ac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1586acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1586b0: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1586b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x1586b4: 0x8c232c90  lw          $v1, 0x2C90($at)
    ctx->pc = 0x1586b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11408)));
    // 0x1586b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1586b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1586bc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1586bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1586c0: 0xac4300a8  sw          $v1, 0xA8($v0)
    ctx->pc = 0x1586c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    // 0x1586c4: 0x8c232cb0  lw          $v1, 0x2CB0($at)
    ctx->pc = 0x1586c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11440)));
    // 0x1586c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1586c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1586cc: 0x8c222c90  lw          $v0, 0x2C90($at)
    ctx->pc = 0x1586ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11408)));
    // 0x1586d0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1586d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1586d4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1586d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1586d8: 0xac222cb0  sw          $v0, 0x2CB0($at)
    ctx->pc = 0x1586d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11440), GPR_U32(ctx, 2));
    // 0x1586dc: 0x0  nop
    ctx->pc = 0x1586dcu;
    // NOP
label_1586e0:
    // 0x1586e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1586e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1586e4: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x1586e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x1586e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1586E8u;
    {
        const bool branch_taken_0x1586e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1586ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1586E8u;
            // 0x1586ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1586e8) {
            ctx->pc = 0x158728u;
            goto label_158728;
        }
    }
    ctx->pc = 0x1586F0u;
    // 0x1586f0: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x1586F0u;
    SET_GPR_U32(ctx, 31, 0x1586F8u);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586F8u; }
        if (ctx->pc != 0x1586F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586F8u; }
        if (ctx->pc != 0x1586F8u) { return; }
    }
    ctx->pc = 0x1586F8u;
    // 0x1586f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1586f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1586fc: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1586fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x158700: 0x8c232c94  lw          $v1, 0x2C94($at)
    ctx->pc = 0x158700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11412)));
    // 0x158704: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x158704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x158708: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15870c: 0xac4300a8  sw          $v1, 0xA8($v0)
    ctx->pc = 0x15870cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    // 0x158710: 0x8c232cb4  lw          $v1, 0x2CB4($at)
    ctx->pc = 0x158710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11444)));
    // 0x158714: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158718: 0x8c222c94  lw          $v0, 0x2C94($at)
    ctx->pc = 0x158718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11412)));
    // 0x15871c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x15871cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x158720: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158724: 0xac222cb4  sw          $v0, 0x2CB4($at)
    ctx->pc = 0x158724u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11444), GPR_U32(ctx, 2));
label_158728:
    // 0x158728: 0xc060718  jal         func_181C60
    ctx->pc = 0x158728u;
    SET_GPR_U32(ctx, 31, 0x158730u);
    ctx->pc = 0x15872Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158728u;
            // 0x15872c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158730u; }
        if (ctx->pc != 0x158730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158730u; }
        if (ctx->pc != 0x158730u) { return; }
    }
    ctx->pc = 0x158730u;
    // 0x158730: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158734: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x158734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x158738: 0xac202ca0  sw          $zero, 0x2CA0($at)
    ctx->pc = 0x158738u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11424), GPR_U32(ctx, 0));
    // 0x15873c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15873cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158740: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x158740u;
    {
        const bool branch_taken_0x158740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158740u;
            // 0x158744: 0xac232ca8  sw          $v1, 0x2CA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158740) {
            ctx->pc = 0x158818u;
            goto label_158818;
        }
    }
    ctx->pc = 0x158748u;
label_158748:
    // 0x158748: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15874c: 0x8c242c88  lw          $a0, 0x2C88($at)
    ctx->pc = 0x15874cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158750: 0x18800007  blez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x158750u;
    {
        const bool branch_taken_0x158750 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x158754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158750u;
            // 0x158754: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158750) {
            ctx->pc = 0x158770u;
            goto label_158770;
        }
    }
    ctx->pc = 0x158758u;
    // 0x158758: 0x8c233508  lw          $v1, 0x3508($at)
    ctx->pc = 0x158758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x15875c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15875Cu;
    {
        const bool branch_taken_0x15875c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15875Cu;
            // 0x158760: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15875c) {
            ctx->pc = 0x158770u;
            goto label_158770;
        }
    }
    ctx->pc = 0x158764u;
    // 0x158764: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158768: 0xac232c88  sw          $v1, 0x2C88($at)
    ctx->pc = 0x158768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11400), GPR_U32(ctx, 3));
    // 0x15876c: 0x0  nop
    ctx->pc = 0x15876cu;
    // NOP
label_158770:
    // 0x158770: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158774: 0x8c243530  lw          $a0, 0x3530($at)
    ctx->pc = 0x158774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x158778: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158778u;
    {
        const bool branch_taken_0x158778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15877Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158778u;
            // 0x15877c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158778) {
            ctx->pc = 0x1587A0u;
            goto label_1587a0;
        }
    }
    ctx->pc = 0x158780u;
    // 0x158780: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x158780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x158784: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x158784u;
    {
        const bool branch_taken_0x158784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158784) {
            ctx->pc = 0x1587A0u;
            goto label_1587a0;
        }
    }
    ctx->pc = 0x15878Cu;
    // 0x15878c: 0xc056328  jal         func_158CA0
    ctx->pc = 0x15878Cu;
    SET_GPR_U32(ctx, 31, 0x158794u);
    ctx->pc = 0x158CA0u;
    if (runtime->hasFunction(0x158CA0u)) {
        auto targetFn = runtime->lookupFunction(0x158CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158794u; }
        if (ctx->pc != 0x158794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultDisp1P2P_0x158ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158794u; }
        if (ctx->pc != 0x158794u) { return; }
    }
    ctx->pc = 0x158794u;
    // 0x158794: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x158794u;
    {
        const bool branch_taken_0x158794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158794) {
            ctx->pc = 0x1587D0u;
            goto label_1587d0;
        }
    }
    ctx->pc = 0x15879Cu;
    // 0x15879c: 0x0  nop
    ctx->pc = 0x15879cu;
    // NOP
label_1587a0:
    // 0x1587a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1587A0u;
    {
        const bool branch_taken_0x1587a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1587a0) {
            ctx->pc = 0x1587B8u;
            goto label_1587b8;
        }
    }
    ctx->pc = 0x1587A8u;
    // 0x1587a8: 0xc05620c  jal         func_158830
    ctx->pc = 0x1587A8u;
    SET_GPR_U32(ctx, 31, 0x1587B0u);
    ctx->pc = 0x1587ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1587A8u;
            // 0x1587ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158830u;
    if (runtime->hasFunction(0x158830u)) {
        auto targetFn = runtime->lookupFunction(0x158830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587B0u; }
        if (ctx->pc != 0x1587B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultDispXp_0x158830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587B0u; }
        if (ctx->pc != 0x1587B0u) { return; }
    }
    ctx->pc = 0x1587B0u;
    // 0x1587b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1587B0u;
    {
        const bool branch_taken_0x1587b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1587b0) {
            ctx->pc = 0x1587D0u;
            goto label_1587d0;
        }
    }
    ctx->pc = 0x1587B8u;
label_1587b8:
    // 0x1587b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1587b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1587bc: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x1587bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x1587c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1587C0u;
    {
        const bool branch_taken_0x1587c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1587C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1587C0u;
            // 0x1587c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587c0) {
            ctx->pc = 0x1587D0u;
            goto label_1587d0;
        }
    }
    ctx->pc = 0x1587C8u;
    // 0x1587c8: 0xc05620c  jal         func_158830
    ctx->pc = 0x1587C8u;
    SET_GPR_U32(ctx, 31, 0x1587D0u);
    ctx->pc = 0x158830u;
    if (runtime->hasFunction(0x158830u)) {
        auto targetFn = runtime->lookupFunction(0x158830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587D0u; }
        if (ctx->pc != 0x1587D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultDispXp_0x158830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587D0u; }
        if (ctx->pc != 0x1587D0u) { return; }
    }
    ctx->pc = 0x1587D0u;
label_1587d0:
    // 0x1587d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1587d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1587d4: 0x8c233508  lw          $v1, 0x3508($at)
    ctx->pc = 0x1587d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x1587d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1587D8u;
    {
        const bool branch_taken_0x1587d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1587DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1587D8u;
            // 0x1587dc: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587d8) {
            ctx->pc = 0x1587F0u;
            goto label_1587f0;
        }
    }
    ctx->pc = 0x1587E0u;
    // 0x1587e0: 0x8c232ca0  lw          $v1, 0x2CA0($at)
    ctx->pc = 0x1587e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11424)));
    // 0x1587e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1587e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1587e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1587e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1587ec: 0xac232ca0  sw          $v1, 0x2CA0($at)
    ctx->pc = 0x1587ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11424), GPR_U32(ctx, 3));
label_1587f0:
    // 0x1587f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1587f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1587f4: 0x8c232ca0  lw          $v1, 0x2CA0($at)
    ctx->pc = 0x1587f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11424)));
    // 0x1587f8: 0x286100f1  slti        $at, $v1, 0xF1
    ctx->pc = 0x1587f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)241) ? 1 : 0);
    // 0x1587fc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1587FCu;
    {
        const bool branch_taken_0x1587fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x158800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1587FCu;
            // 0x158800: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587fc) {
            ctx->pc = 0x158818u;
            goto label_158818;
        }
    }
    ctx->pc = 0x158804u;
    // 0x158804: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x158808u;
    {
        const bool branch_taken_0x158808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15880Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158808u;
            // 0x15880c: 0xac232ca8  sw          $v1, 0x2CA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158808) {
            ctx->pc = 0x158818u;
            goto label_158818;
        }
    }
    ctx->pc = 0x158810u;
label_158810:
    // 0x158810: 0xc056584  jal         func_159610
    ctx->pc = 0x158810u;
    SET_GPR_U32(ctx, 31, 0x158818u);
    ctx->pc = 0x158814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158810u;
            // 0x158814: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159610u;
    if (runtime->hasFunction(0x159610u)) {
        auto targetFn = runtime->lookupFunction(0x159610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158818u; }
        if (ctx->pc != 0x158818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setLoop_0x159610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158818u; }
        if (ctx->pc != 0x158818u) { return; }
    }
    ctx->pc = 0x158818u;
label_158818:
    // 0x158818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15881c: 0x3e00008  jr          $ra
    ctx->pc = 0x15881Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15881Cu;
            // 0x158820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158198u: goto label_158198;
            case 0x1581B8u: goto label_1581b8;
            case 0x1581E0u: goto label_1581e0;
            case 0x1582E8u: goto label_1582e8;
            case 0x1583C8u: goto label_1583c8;
            case 0x1583E0u: goto label_1583e0;
            case 0x158408u: goto label_158408;
            case 0x158438u: goto label_158438;
            case 0x158450u: goto label_158450;
            case 0x158468u: goto label_158468;
            case 0x158488u: goto label_158488;
            case 0x1584C8u: goto label_1584c8;
            case 0x1584F0u: goto label_1584f0;
            case 0x158518u: goto label_158518;
            case 0x158548u: goto label_158548;
            case 0x158560u: goto label_158560;
            case 0x158578u: goto label_158578;
            case 0x1585D0u: goto label_1585d0;
            case 0x158618u: goto label_158618;
            case 0x158634u: goto label_158634;
            case 0x158658u: goto label_158658;
            case 0x158660u: goto label_158660;
            case 0x158678u: goto label_158678;
            case 0x1586E0u: goto label_1586e0;
            case 0x158728u: goto label_158728;
            case 0x158748u: goto label_158748;
            case 0x158770u: goto label_158770;
            case 0x1587A0u: goto label_1587a0;
            case 0x1587B8u: goto label_1587b8;
            case 0x1587D0u: goto label_1587d0;
            case 0x1587F0u: goto label_1587f0;
            case 0x158810u: goto label_158810;
            case 0x158818u: goto label_158818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158824u;
}
