#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: exponent
// Address: 0x13f1c8 - 0x13f2a8
void exponent_0x13f1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("exponent_0x13f1c8");
#endif

    ctx->pc = 0x13f1c8u;

    // 0x13f1c8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x13f1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x13f1cc: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F1CCu;
    {
        const bool branch_taken_0x13f1cc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x13F1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F1CCu;
            // 0x13f1d0: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1cc) {
            ctx->pc = 0x13F1E8u;
            goto label_13f1e8;
        }
    }
    ctx->pc = 0x13F1D4u;
    // 0x13f1d4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x13f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x13f1d8: 0x52823  negu        $a1, $a1
    ctx->pc = 0x13f1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x13f1dc: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x13f1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x13f1e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13F1E0u;
    {
        const bool branch_taken_0x13f1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F1E0u;
            // 0x13f1e4: 0x24880002  addiu       $t0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1e0) {
            ctx->pc = 0x13F1F4u;
            goto label_13f1f4;
        }
    }
    ctx->pc = 0x13F1E8u;
label_13f1e8:
    // 0x13f1e8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x13f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x13f1ec: 0x24880002  addiu       $t0, $a0, 0x2
    ctx->pc = 0x13f1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x13f1f0: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x13f1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_13f1f4:
    // 0x13f1f4: 0x27a60134  addiu       $a2, $sp, 0x134
    ctx->pc = 0x13f1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x13f1f8: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x13f1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x13f1fc: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x13F1FCu;
    {
        const bool branch_taken_0x13f1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F1FCu;
            // 0x13f200: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1fc) {
            ctx->pc = 0x13F284u;
            goto label_13f284;
        }
    }
    ctx->pc = 0x13F204u;
    // 0x13f204: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x13f204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13f208: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13f208u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f20c: 0xa7001a  div         $zero, $a1, $a3
    ctx->pc = 0x13f20cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_13f210:
    // 0x13f210: 0x50e90001  beql        $a3, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x13F210u;
    {
        const bool branch_taken_0x13f210 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x13f210) {
            ctx->pc = 0x13F214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F210u;
            // 0x13f214: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F218u;
            goto label_13f218;
        }
    }
    ctx->pc = 0x13F218u;
label_13f218:
    // 0x13f218: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x13f218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x13f21c: 0x1010  mfhi        $v0
    ctx->pc = 0x13f21cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13f220: 0x1812  mflo        $v1
    ctx->pc = 0x13f220u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x13f224: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x13f224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13f228: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x13f228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f22c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x13f22cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x13f230: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x13f230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x13f234: 0x50e90001  beql        $a3, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x13F234u;
    {
        const bool branch_taken_0x13f234 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x13f234) {
            ctx->pc = 0x13F238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F234u;
            // 0x13f238: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F23Cu;
            goto label_13f23c;
        }
    }
    ctx->pc = 0x13F23Cu;
label_13f23c:
    // 0x13f23c: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x13F23Cu;
    {
        const bool branch_taken_0x13f23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f23c) {
            ctx->pc = 0x13F240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F23Cu;
            // 0x13f240: 0xa7001a  div         $zero, $a1, $a3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F210u;
            goto label_13f210;
        }
    }
    ctx->pc = 0x13F244u;
    // 0x13f244: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x13f244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x13f248: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x13f248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x13f24c: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x13f24cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x13f250: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13F250u;
    {
        const bool branch_taken_0x13f250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F250u;
            // 0x13f254: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f250) {
            ctx->pc = 0x13F29Cu;
            goto label_13f29c;
        }
    }
    ctx->pc = 0x13F258u;
    // 0x13f258: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x13f258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f25c: 0x0  nop
    ctx->pc = 0x13f25cu;
    // NOP
label_13f260:
    // 0x13f260: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x13f260u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13f264: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13f264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13f268: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x13f268u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x13f26c: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x13f26cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13f270: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x13f270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x13f274: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13F274u;
    {
        const bool branch_taken_0x13f274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f274) {
            ctx->pc = 0x13F260u;
            goto label_13f260;
        }
    }
    ctx->pc = 0x13F27Cu;
    // 0x13f27c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13F27Cu;
    {
        const bool branch_taken_0x13f27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F27Cu;
            // 0x13f280: 0x1041023  subu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f27c) {
            ctx->pc = 0x13F2A0u;
            goto label_13f2a0;
        }
    }
    ctx->pc = 0x13F284u;
label_13f284:
    // 0x13f284: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x13f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13f288: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x13f288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x13f28c: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x13f28cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x13f290: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x13f290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x13f294: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x13f294u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x13f298: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x13f298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_13f29c:
    // 0x13f29c: 0x1041023  subu        $v0, $t0, $a0
    ctx->pc = 0x13f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_13f2a0:
    // 0x13f2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x13F2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F2A0u;
            // 0x13f2a4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F1E8u: goto label_13f1e8;
            case 0x13F1F4u: goto label_13f1f4;
            case 0x13F210u: goto label_13f210;
            case 0x13F218u: goto label_13f218;
            case 0x13F23Cu: goto label_13f23c;
            case 0x13F260u: goto label_13f260;
            case 0x13F284u: goto label_13f284;
            case 0x13F29Cu: goto label_13f29c;
            case 0x13F2A0u: goto label_13f2a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F2A8u;
}
