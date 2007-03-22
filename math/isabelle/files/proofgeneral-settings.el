;;;
;;; $Id$
;;;
;;; Options for Proof General

;; Examples for sensible settings:

;(custom-set-variables '(isar-eta-contract nil))

;(custom-set-faces
; '(proof-locked-face
;   ((((type x) (class color) (background light)) (:background "lightsteelblue2")))))

; Makarius' Poly/ML 5.0 patches
(custom-set-variables
 '(proof-shell-pre-interrupt-hook (lambda () t)))

