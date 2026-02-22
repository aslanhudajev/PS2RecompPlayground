#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lo0bits
// Address: 0x1301e8 - 0x1302a8
void _lo0bits_0x1301e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1301e8u;

    // 0x1301e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1301e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1301ec: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1301ecu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
    // 0x1301f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1301F0u;
    {
        const bool branch_taken_0x1301f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1301F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1301F0u;
            // 0x1301f4: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301f0) {
            ctx->pc = 0x13022Cu;
            goto label_13022c;
        }
    }
    ctx->pc = 0x1301F8u;
    // 0x1301f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1301F8u;
    {
        const bool branch_taken_0x1301f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1301FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1301F8u;
            // 0x1301fc: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301f8) {
            ctx->pc = 0x130208u;
            goto label_130208;
        }
    }
    ctx->pc = 0x130200u;
    // 0x130200: 0x3e00008  jr          $ra
    ctx->pc = 0x130200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130200u;
            // 0x130204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130208u: goto label_130208;
            case 0x130220u: goto label_130220;
            case 0x13022Cu: goto label_13022c;
            case 0x130240u: goto label_130240;
            case 0x130258u: goto label_130258;
            case 0x13026Cu: goto label_13026c;
            case 0x130280u: goto label_130280;
            case 0x13029Cu: goto label_13029c;
            case 0x1302A0u: goto label_1302a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130208u;
label_130208:
    // 0x130208: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x130208u;
    {
        const bool branch_taken_0x130208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130208) {
            ctx->pc = 0x13020Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130208u;
            // 0x13020c: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130220u;
            goto label_130220;
        }
    }
    ctx->pc = 0x130210u;
    // 0x130210: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x130210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x130214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130218: 0x3e00008  jr          $ra
    ctx->pc = 0x130218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13021Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130218u;
            // 0x13021c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130208u: goto label_130208;
            case 0x130220u: goto label_130220;
            case 0x13022Cu: goto label_13022c;
            case 0x130240u: goto label_130240;
            case 0x130258u: goto label_130258;
            case 0x13026Cu: goto label_13026c;
            case 0x130280u: goto label_130280;
            case 0x13029Cu: goto label_13029c;
            case 0x1302A0u: goto label_1302a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130220u;
label_130220:
    // 0x130220: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x130220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x130224: 0x3e00008  jr          $ra
    ctx->pc = 0x130224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130224u;
            // 0x130228: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130208u: goto label_130208;
            case 0x130220u: goto label_130220;
            case 0x13022Cu: goto label_13022c;
            case 0x130240u: goto label_130240;
            case 0x130258u: goto label_130258;
            case 0x13026Cu: goto label_13026c;
            case 0x130280u: goto label_130280;
            case 0x13029Cu: goto label_13029c;
            case 0x1302A0u: goto label_1302a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13022Cu;
label_13022c:
    // 0x13022c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x13022cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x130230: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130230u;
    {
        const bool branch_taken_0x130230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130230u;
            // 0x130234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130230) {
            ctx->pc = 0x130240u;
            goto label_130240;
        }
    }
    ctx->pc = 0x130238u;
    // 0x130238: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x130238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13023c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x13023cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_130240:
    // 0x130240: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x130240u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)255u)));
    // 0x130244: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x130244u;
    {
        const bool branch_taken_0x130244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130244u;
            // 0x130248: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130244) {
            ctx->pc = 0x130258u;
            goto label_130258;
        }
    }
    ctx->pc = 0x13024Cu;
    // 0x13024c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x13024cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x130250: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x130250u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x130254: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x130254u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
label_130258:
    // 0x130258: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x130258u;
    {
        const bool branch_taken_0x130258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13025Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130258u;
            // 0x13025c: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130258) {
            ctx->pc = 0x13026Cu;
            goto label_13026c;
        }
    }
    ctx->pc = 0x130260u;
    // 0x130260: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x130260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x130264: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x130264u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x130268: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x130268u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
label_13026c:
    // 0x13026c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13026Cu;
    {
        const bool branch_taken_0x13026c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13026Cu;
            // 0x130270: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13026c) {
            ctx->pc = 0x130280u;
            goto label_130280;
        }
    }
    ctx->pc = 0x130274u;
    // 0x130274: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x130274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x130278: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x130278u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x13027c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x13027cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
label_130280:
    // 0x130280: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x130280u;
    {
        const bool branch_taken_0x130280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130280) {
            ctx->pc = 0x130284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130280u;
            // 0x130284: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1302A0u;
            goto label_1302a0;
        }
    }
    ctx->pc = 0x130288u;
    // 0x130288: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x130288u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x13028c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13028Cu;
    {
        const bool branch_taken_0x13028c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13028Cu;
            // 0x130290: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13028c) {
            ctx->pc = 0x13029Cu;
            goto label_13029c;
        }
    }
    ctx->pc = 0x130294u;
    // 0x130294: 0x3e00008  jr          $ra
    ctx->pc = 0x130294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130294u;
            // 0x130298: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130208u: goto label_130208;
            case 0x130220u: goto label_130220;
            case 0x13022Cu: goto label_13022c;
            case 0x130240u: goto label_130240;
            case 0x130258u: goto label_130258;
            case 0x13026Cu: goto label_13026c;
            case 0x130280u: goto label_130280;
            case 0x13029Cu: goto label_13029c;
            case 0x1302A0u: goto label_1302a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13029Cu;
label_13029c:
    // 0x13029c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13029cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1302a0:
    // 0x1302a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1302A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1302A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1302A0u;
            // 0x1302a4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130208u: goto label_130208;
            case 0x130220u: goto label_130220;
            case 0x13022Cu: goto label_13022c;
            case 0x130240u: goto label_130240;
            case 0x130258u: goto label_130258;
            case 0x13026Cu: goto label_13026c;
            case 0x130280u: goto label_130280;
            case 0x13029Cu: goto label_13029c;
            case 0x1302A0u: goto label_1302a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1302A8u;
}
