#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvdec_MotionSub
// Address: 0x1850d8 - 0x1852bc
void mpvdec_MotionSub_0x1850d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvdec_MotionSub");


    ctx->pc = 0x1850d8u;

    // 0x1850d8: 0x80702d
    ctx->pc = 0x1850d8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850dc: 0x8cad0004
    ctx->pc = 0x1850dcu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1850e0: 0x8dcc0000
    ctx->pc = 0x1850e0u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1850e4: 0x782d
    ctx->pc = 0x1850e4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850e8: 0x8dca0008
    ctx->pc = 0x1850e8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x1850ec: 0x8cb80008
    ctx->pc = 0x1850ecu;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1850f0: 0xc2542
    ctx->pc = 0x1850f0u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 12), 21));
    // 0x1850f4: 0x8dc80004
    ctx->pc = 0x1850f4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x1850f8: 0x29420016
    ctx->pc = 0x1850f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 22));
    // 0x1850fc: 0x14400005
    ctx->pc = 0x1850FCu;
    {
        const bool branch_taken_0x1850fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185100u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 14), 12)));
        if (branch_taken_0x1850fc) {
            ctx->pc = 0x185114u;
            goto label_185114;
        }
    }
    ctx->pc = 0x185104u;
    // 0x185104: 0x24020035
    ctx->pc = 0x185104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 53));
    // 0x185108: 0x4a1023
    ctx->pc = 0x185108u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18510c: 0x481006
    ctx->pc = 0x18510cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x185110: 0x822025
    ctx->pc = 0x185110u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_185114:
    // 0x185114: 0x411c2
    ctx->pc = 0x185114u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 7));
    // 0x185118: 0x14400005
    ctx->pc = 0x185118u;
    {
        const bool branch_taken_0x185118 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18511Cu;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 6));
        if (branch_taken_0x185118) {
            ctx->pc = 0x185130u;
            goto label_185130;
        }
    }
    ctx->pc = 0x185120u;
    // 0x185120: 0x41840
    ctx->pc = 0x185120u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x185124: 0x3c020024
    ctx->pc = 0x185124u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x185128: 0x10000004
    ctx->pc = 0x185128u;
    {
        const bool branch_taken_0x185128 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18512Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 6728)));
        if (branch_taken_0x185128) {
            ctx->pc = 0x18513Cu;
            goto label_18513c;
        }
    }
    ctx->pc = 0x185130u;
label_185130:
    // 0x185130: 0x3c020024
    ctx->pc = 0x185130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x185134: 0x8c441a4c
    ctx->pc = 0x185134u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 6732)));
    // 0x185138: 0x31840
    ctx->pc = 0x185138u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
label_18513c:
    // 0x18513c: 0x641821
    ctx->pc = 0x18513cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x185140: 0x84640000
    ctx->pc = 0x185140u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185144: 0x41600
    ctx->pc = 0x185144u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
    // 0x185148: 0x2403007f
    ctx->pc = 0x185148u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 127));
    // 0x18514c: 0x25e03
    ctx->pc = 0x18514cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 24));
    // 0x185150: 0x15630004
    ctx->pc = 0x185150u;
    {
        const bool branch_taken_0x185150 = (GPR_U32(ctx, 11) != GPR_U32(ctx, 3));
        ctx->pc = 0x185154u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x185150) {
            ctx->pc = 0x185164u;
            goto label_185164;
        }
    }
    ctx->pc = 0x185158u;
    // 0x185158: 0x3c0fffff
    ctx->pc = 0x185158u;
    SET_GPR_U32(ctx, 15, ((uint32_t)65535 << 16));
    // 0x18515c: 0x10000051
    ctx->pc = 0x18515Cu;
    {
        const bool branch_taken_0x18515c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185160u;
        SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), 65535));
        if (branch_taken_0x18515c) {
            ctx->pc = 0x1852A4u;
            goto label_1852a4;
        }
    }
    ctx->pc = 0x185164u;
label_185164:
    // 0x185164: 0x304400ff
    ctx->pc = 0x185164u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 255));
    // 0x185168: 0x1445021
    ctx->pc = 0x185168u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x18516c: 0x29420020
    ctx->pc = 0x18516cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 32));
    // 0x185170: 0x14400011
    ctx->pc = 0x185170u;
    {
        const bool branch_taken_0x185170 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185174u;
        SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 4) & 0x1F));
        if (branch_taken_0x185170) {
            ctx->pc = 0x1851B8u;
            goto label_1851b8;
        }
    }
    ctx->pc = 0x185178u;
    // 0x185178: 0x254affe0
    ctx->pc = 0x185178u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x18517c: 0x1486004
    ctx->pc = 0x18517cu;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
    // 0x185180: 0x81280000
    ctx->pc = 0x185180u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x185184: 0x25290001
    ctx->pc = 0x185184u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x185188: 0x91220000
    ctx->pc = 0x185188u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18518c: 0x84200
    ctx->pc = 0x18518cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x185190: 0x25290001
    ctx->pc = 0x185190u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x185194: 0x1024025
    ctx->pc = 0x185194u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x185198: 0x91230000
    ctx->pc = 0x185198u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18519c: 0x25290001
    ctx->pc = 0x18519cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1851a0: 0x84200
    ctx->pc = 0x1851a0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1851a4: 0x91220000
    ctx->pc = 0x1851a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1851a8: 0x1034025
    ctx->pc = 0x1851a8u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1851ac: 0x84200
    ctx->pc = 0x1851acu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1851b0: 0x25290001
    ctx->pc = 0x1851b0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1851b4: 0x1024025
    ctx->pc = 0x1851b4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1851b8:
    // 0x1851b8: 0x15600004
    ctx->pc = 0x1851B8u;
    {
        const bool branch_taken_0x1851b8 = (GPR_U32(ctx, 11) != GPR_U32(ctx, 0));
        if (branch_taken_0x1851b8) {
            ctx->pc = 0x1851CCu;
            goto label_1851cc;
        }
    }
    ctx->pc = 0x1851C0u;
    // 0x1851c0: 0x8ce20000
    ctx->pc = 0x1851c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1851c4: 0x10000031
    ctx->pc = 0x1851C4u;
    {
        const bool branch_taken_0x1851c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1851C8u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1851c4) {
            ctx->pc = 0x18528Cu;
            goto label_18528c;
        }
    }
    ctx->pc = 0x1851CCu;
label_1851cc:
    // 0x1851cc: 0x11a00029
    ctx->pc = 0x1851CCu;
    {
        const bool branch_taken_0x1851cc = (GPR_U32(ctx, 13) == GPR_U32(ctx, 0));
        ctx->pc = 0x1851D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x1851cc) {
            ctx->pc = 0x185274u;
            goto label_185274;
        }
    }
    ctx->pc = 0x1851D4u;
    // 0x1851d4: 0x4d2023
    ctx->pc = 0x1851d4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1851d8: 0x144182a
    ctx->pc = 0x1851d8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 4)));
    // 0x1851dc: 0x5460001b
    ctx->pc = 0x1851DCu;
    {
        const bool branch_taken_0x1851dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1851dc) {
            ctx->pc = 0x1851E0u;
            SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 4) & 0x1F));
            ctx->pc = 0x18524Cu;
            goto label_18524c;
        }
    }
    ctx->pc = 0x1851E4u;
    // 0x1851e4: 0x2542ffe0
    ctx->pc = 0x1851e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x1851e8: 0x4d5021
    ctx->pc = 0x1851e8u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1851ec: 0x51400007
    ctx->pc = 0x1851ECu;
    {
        const bool branch_taken_0x1851ec = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        if (branch_taken_0x1851ec) {
            ctx->pc = 0x1851F0u;
            SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 4) & 0x1F));
            ctx->pc = 0x18520Cu;
            goto label_18520c;
        }
    }
    ctx->pc = 0x1851F4u;
    // 0x1851f4: 0x1aa1023
    ctx->pc = 0x1851f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x1851f8: 0x481006
    ctx->pc = 0x1851f8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1851fc: 0x1826025
    ctx->pc = 0x1851fcu;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x185200: 0x8c2006
    ctx->pc = 0x185200u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 4) & 0x1F));
    // 0x185204: 0x10000002
    ctx->pc = 0x185204u;
    {
        const bool branch_taken_0x185204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185208u;
        SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
        if (branch_taken_0x185204) {
            ctx->pc = 0x185210u;
            goto label_185210;
        }
    }
    ctx->pc = 0x18520Cu;
label_18520c:
    // 0x18520c: 0x100602d
    ctx->pc = 0x18520cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_185210:
    // 0x185210: 0x81280000
    ctx->pc = 0x185210u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x185214: 0x25290001
    ctx->pc = 0x185214u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x185218: 0x91220000
    ctx->pc = 0x185218u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18521c: 0x84200
    ctx->pc = 0x18521cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x185220: 0x25290001
    ctx->pc = 0x185220u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x185224: 0x1024025
    ctx->pc = 0x185224u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x185228: 0x91230000
    ctx->pc = 0x185228u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18522c: 0x25290001
    ctx->pc = 0x18522cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x185230: 0x84200
    ctx->pc = 0x185230u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x185234: 0x91220000
    ctx->pc = 0x185234u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x185238: 0x1034025
    ctx->pc = 0x185238u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x18523c: 0x84200
    ctx->pc = 0x18523cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x185240: 0x25290001
    ctx->pc = 0x185240u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x185244: 0x10000003
    ctx->pc = 0x185244u;
    {
        const bool branch_taken_0x185244 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185248u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x185244) {
            ctx->pc = 0x185254u;
            goto label_185254;
        }
    }
    ctx->pc = 0x18524Cu;
label_18524c:
    // 0x18524c: 0x14d5021
    ctx->pc = 0x18524cu;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x185250: 0x1ac6004
    ctx->pc = 0x185250u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_185254:
    // 0x185254: 0x8ca3000c
    ctx->pc = 0x185254u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x185258: 0x24820001
    ctx->pc = 0x185258u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x18525c: 0x1ab5804
    ctx->pc = 0x18525cu;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 13) & 0x1F));
    // 0x185260: 0x19600003
    ctx->pc = 0x185260u;
    {
        const bool branch_taken_0x185260 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x185264u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x185260) {
            ctx->pc = 0x185270u;
            goto label_185270;
        }
    }
    ctx->pc = 0x185268u;
    // 0x185268: 0x10000002
    ctx->pc = 0x185268u;
    {
        const bool branch_taken_0x185268 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18526Cu;
        SET_GPR_U32(ctx, 11, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        if (branch_taken_0x185268) {
            ctx->pc = 0x185274u;
            goto label_185274;
        }
    }
    ctx->pc = 0x185270u;
label_185270:
    // 0x185270: 0x1625821
    ctx->pc = 0x185270u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_185274:
    // 0x185274: 0x8ce30000
    ctx->pc = 0x185274u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x185278: 0x1635821
    ctx->pc = 0x185278u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x18527c: 0x30b1004
    ctx->pc = 0x18527cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x185280: 0x3021007
    ctx->pc = 0x185280u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x185284: 0xacc20000
    ctx->pc = 0x185284u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x185288: 0xace20000
    ctx->pc = 0x185288u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_18528c:
    // 0x18528c: 0x8ca20000
    ctx->pc = 0x18528cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185290: 0x50400005
    ctx->pc = 0x185290u;
    {
        const bool branch_taken_0x185290 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x185290) {
            ctx->pc = 0x185294u;
            WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 9));
            ctx->pc = 0x1852A8u;
            goto label_1852a8;
        }
    }
    ctx->pc = 0x185298u;
    // 0x185298: 0x8cc20000
    ctx->pc = 0x185298u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18529c: 0x21040
    ctx->pc = 0x18529cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1852a0: 0xacc20000
    ctx->pc = 0x1852a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1852a4:
    // 0x1852a4: 0xadc9000c
    ctx->pc = 0x1852a4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 9));
label_1852a8:
    // 0x1852a8: 0x1e0102d
    ctx->pc = 0x1852a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852ac: 0xadcc0000
    ctx->pc = 0x1852acu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 12));
    // 0x1852b0: 0xadc80004
    ctx->pc = 0x1852b0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 8));
    // 0x1852b4: 0x3e00008
    ctx->pc = 0x1852B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1852B8u;
        WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 10));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185114u: goto label_185114;
            case 0x185130u: goto label_185130;
            case 0x18513Cu: goto label_18513c;
            case 0x185164u: goto label_185164;
            case 0x1851B8u: goto label_1851b8;
            case 0x1851CCu: goto label_1851cc;
            case 0x18520Cu: goto label_18520c;
            case 0x185210u: goto label_185210;
            case 0x18524Cu: goto label_18524c;
            case 0x185254u: goto label_185254;
            case 0x185270u: goto label_185270;
            case 0x185274u: goto label_185274;
            case 0x18528Cu: goto label_18528c;
            case 0x1852A4u: goto label_1852a4;
            case 0x1852A8u: goto label_1852a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1852BCu;
}
